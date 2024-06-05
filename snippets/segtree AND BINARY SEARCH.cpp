#include <bits/stdc++.h>

using namespace std;
class Node{
public:
	int v = (1LL<<31)-1; //We can use more variables depending on what all info we need !
	// 1. this is identitiyElement - default node value which will not impact answer on taken
	Node(){}
	Node(int val){
		v = val; // 2. Node constructor will change depending on, what we need to initialize
	}
	
	void merge(const Node& l, const Node& r){ // v is each nodes data, while l & r are children
		v = (l.v & r.v); //3. Merge function (merge logic can change)
	}
};

class Update{
public:
	int v = 0;
	// 4. this is identity Transformation - default update value assigned before or after the operation
	Update(){};
	Update(int val){
		v = val; // 5. Update constructor initialization
	}
	
	void combine(const Update& otherUpdate, const int& tl, const int& tr){ //combing the update, to give to chidren in future
		v += otherUpdate.v; // 6. OtherUpdate is the newest update ['=' or '+=' depends on 'assign/set' vs 'add']
	}
	
	void apply(Node& node, const int& tl, const int& tr) const{
		node.v += (tr - tl + 1) * v; // 7. applying the update received on the node
	}	
};

template <typename node, typename update>
class SegTree{
public:
	int len;
	vector<node> t;
	node identityElement;
	update identityTransformation; 
	
	SegTree(){}
	SegTree(int l){
		len = l;
		t.resize(4 * len);
		identityElement = node();
		identityTransformation = update();
	}
	
	// Build Segment Tree -- build(a, 1, 0, len-1); 
	template<typename T>
	void build(const T& a, int v, int tl, int tr){
		if(tl == tr){
			t[v] = a[tl];
			return;
		}
		int tm = (tl + tr)/2;
		build(a, 2*v, tl, tm);
		build(a, 2*v+1, tm+1, tr);
		t[v].merge(t[2*v], t[2*v+1]);
	}
	
	// Query input question is = [l, r] included -- query(1, 0, len-1, l, r)
	node query(int v, int tl, int tr, int l, int r){
		if(tl > r || tr < l) return identityElement; // no overlap
		if(l <= tl && tr <= r) return t[v]; //Full overlap
		
		// Partial Overlap
		// pushDown(v, tl, tr); //we remove the lazy tag before going down, so children have correct info
		int tm = (tl + tr)/2;
		node leftAns = query(2*v, tl, tm, l, r);
		node rightAns = query(2*v+1, tm+1, tr, l, r);
		node ans;
		ans.merge(leftAns, rightAns);
		return ans;
	}
	
	//over-ridden functions
	template<typename T>
	void build(const T& a){
		build(a, 1, 0, len-1);
	}
	
	node query(int l, int r){
		return query(1, 0, len-1, l, r);
	}
};
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int result=INT_MAX;
        SegTree<Node,Update> segmentTree(n);
        segmentTree.build(nums);
        for(int i =0;i<n;i++){
         if(nums[i]<=k)result=min(result,k-nums[i]);
         else{
          int l=i,r=n-1;
          while(l<=r){
           int mid=(l+r)/2;
           int ranged= segmentTree.query(i,mid).v;
           result=min(result,abs(ranged-k));
           if(ranged>k){
             l=mid+1;

           }else if(ranged<k){
            r=mid-1;
           }else{
            return 0;
           }

          }
         }

        }
        return result;
    }
};