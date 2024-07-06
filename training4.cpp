#include <bits/stdc++.h>

using namespace std;


// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// class Solution {
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//         vector<int>node;
//         int prev=head->val;
//         head=head->next;
//         int current;
//         int nextVal;
//         int counter=0;
//         while(head->next&&head->next->next){
//             current=head->val;
//             nextVal=head->next->val;
//             if((current>nextVal&&current>prev)||(current<nextVal&&current<prev)){
//                 node.push_back(counter);
//             }
//             prev=current;
//             counter++;
//             head=head->next;
//         }
//         if(node.size()==0)return {-1,-1};
//         int mini=INT_MAX;
//         for(int i =1;i<node.size();i++){
//             mini=min(mini,node[i]-node[i-1]);
//         }
//         int maxi=node[node.size()-1]-node[0];
//         return {mini,maxi};
//     }
// };
//     ListNode* CreateLinkedList(vector<int>&nums){
//           ListNode* result= new ListNode();
//           ListNode* clone= result;
//           for(int i =0;i<nums.size();i++){
//               ListNode* newNode= new ListNode();
//               newNode->val=nums[i];
//               clone->next=newNode;
//               clone=clone->next;
//             }
//             return result->next;
//      }
class Solution {
public:
    void minsZero(vector<int>&bit,int x){
        for(int i =0;i<32;i++){
            if(!(1<<i&x))bit[i]--;
        }
    }
    void addZero(vector<int>&bit,int x){
        for(int i =0;i<32;i++){
            if(!(1<<i&x))bit[i]++;
        }
    }
    int calc(vector<int>&bit){
        int result=0;
        for(int i =0;i<32;i++){
            result+=(1<<i)*(bit[i]==0);
        }
        return result;
    }
    long long countSubarrays(vector<int>& nums, int k) {
        int n =nums.size();
        vector<int>zeroBit(32,0);
        int i=0,j=0;
        long long result=0;
        int ranged=0;
        while(j<n){
            addZero(zeroBit,nums[j]);
            ranged=calc(zeroBit);
            
            while(i<j && ranged<k){
                minsZero(zeroBit,nums[i]);
                ranged=calc(zeroBit);
                
                i++;
            }  
            if(ranged==k)result+=(j-i+1);
            j++;
        }
        return result;
    } 
  
};
int main(){
    vector<int>vec({1,2,3});
    int amount=2;
    int pts=Solution().countSubarrays(vec,amount);
    return 0;
}