


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

// class Solution {
// public:
//     int minOperations(vector<string>& logs) {
//         stack<string>st;
//         for(string &s:logs){
//             if(s=="./"||st.empty())continue;
//             else if(s=="../")st.pop();
//             else st.push(s);
//         }
//         return st.size();
//     }
// };
// #include <bits/stdc++.h>

// using namespace std;
// int main(){
//     freopen("a.txt","r",stdin);

//     int x,y;
//     cin>>x>>y;
//     vector<vector<int>>matrix(x,vector<int>(y));
//     for(int i =0;i<x;i++){
//         for(int j=0;j<y;j++){
//             int num;
//             cin>>num;
//             matrix[i][j]=num;
//         }
//     }
//     vector<vector<int>>result(x,vector<int>(y,1));
//     for(int i =0;i<x;i++){
//         for(int j=0;j<y;j++){
//             if(matrix[i][j]==0){
//                 for(int v=0;v<x;v++){
//                     result[v][j]=0;
//                 }
//                 for(int v=0;v<y;v++){
//                     result[i][v]=0;
//                 }
//             }
//         }
//     }
//     vector<int>hor(y);
//     vector<int>vert(x);
    
//     for(int i =0;i<x;i++){
//         int res=result[i][0];
//         for(int j=1;j<y;j++){
//             res|=result[i][j];
//         }
//         vert[i]=res;
//     }

//     for(int j=0;j<y;j++){
//         int res=result[0][j];
//         for(int i =1;i<x;i++){
//             res|=result[i][j];
//         }
//         hor[j]=res;
//     }
//     bool isOk=true;
//     for(int i =0;i<x;i++){
//         for(int j=0;j<y;j++){
//             if(matrix[i][j]==1&&hor[j]==0&&vert[i]==0){
//                 isOk=false;
//                 i=x;
//                 j=y;
//             }
//         }

//     }
//     if(isOk){
//         cout<<"YES"<<endl;
//         for(int i =0;i<x;i++){
//             for(int j=0;j<y;j++){
//                 cout<<result[i][j];
//                 if(j!=(y-1))cout<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }

// cdbcbbaaabab
// 012345678901
// class Solution {
// public:
//     int n;
//     int gainer(vector<char>&v,vector<int>&bad,string ss,int x){
//         int result=0;
//         for(int i =1;i<n;i++){
//             if(v[i]==ss[1]&&v[i-1]==ss[0]&&!bad[i]&&!bad[i-1]){
//                 result+=x;
//                 bad[i]=1;
//                 bad[i-1]=1;
//             }
//         }
//         return result;
//     }
//     int maximumGain(string s, int x, int y) {
//         vector<char>v;
//         this->n=s.size();
//         for(char &c:s)v.push_back(c);
//         string first="ab";
//         string second="ba";
//         if(x<y){
//             swap(first,second);
//             swap(x,y);
//         }
//         vector<int>bad(n,0);
//         return gainer(v,bad,first,x)+gainer(v,bad,second,y);
//     }
// };
//   freopen("a.txt", "r", stdin);

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 5;
void solve() {
    ll result = 0;
    int n, m, k, w;
    cin >> n >> m >> k >> w;
    vector<ll> a(w); 
    for (int i = 0; i < w; i++) {
        cin >> a[i];
    }
    vector<ll> l(n + 1, 0);
    vector<ll> c(m + 1, 0);
    for (int i = 0; i <= n - k; i++) {
        l[i]++;
        l[i + k]--;
    }
    for (int i = 0; i <= m - k; i++) {
        c[i]++;
        c[i + k]--;
    }
    for (int i = 1; i < n; i++) {
        l[i] += l[i - 1];
    }
    for (int i = 1; i < m; i++) {
        c[i] += c[i - 1];
    }
    vector<ll> v;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            v.push_back(l[i] * c[j]);
        }
    }
    sort(v.begin(),v.end(),greater<ll>());
    sort(a.begin(),a.end(),greater<ll>());
    for (int i = 0; i < min(w, (int)v.size()); i++) {
        result+=a[i]*v[i];
    }

    cout << result << endl;
}

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPairs(vector<int>& nums) {
        int result=0;
 
        for(int i =0;i<nums.size();i++){
            string comp=to_string(nums[i]);
            for(int j=0;j<nums.size();j++){
                if(i==j)continue;
                string comp2=to_string(nums[j]);
                if(comp.size()<comp2.size())continue;
                while(comp2.size()!=comp.size())comp2="0"+comp2;
                for(int k=0;k<comp2.size();k++){
                    for(int kk=k+1;kk<comp2.size();kk++){
                        swap(comp2[k],comp2[kk]);
                        if(comp2==comp){
                            result++;
                            k=comp2.size();
                            kk=comp2.size();
                        }
                        swap(comp2[k],comp2[kk]);
                    }
                }
            }
        }
        return result;
    }
};
int main() {
   vector<int>nums={3,12,30,17,21};
   Solution().countPairs(nums);
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     freopen("a.txt", "r", stdin);
//     int n ;
//     cin >> n;

    
//    int result=0;
//     for(int i =1;i<=n;i++){
//         if( i%2==0){
//             if(__builtin_popcount(i)%2==0)result++;
//         }
         
//     }
//     cout<<result<<endl;

//     return 0;
// }
