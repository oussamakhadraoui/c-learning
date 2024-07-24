


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

#include <bits/stdc++.h>

using namespace std;

#define ll long long


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int result=0;
        unordered_map<int,int>rec;
        for(int i =0;i<n;i++)rec[nums[i]]=1;
        for(int i=0;i<n;i++){
            if(rec[nums[i]-1])rec[nums[i]]=0;
        }
        for(int i =0;i<n;i++){
            int count=0;int add=0;
            if(rec[nums[i]+add]){
                while(rec.count(nums[i]+add)){
                    count++;
                    add++;
                }
            }
            result=max(result,count);
        }
        return result;
    }
};
int main() {
//     vector<int> nums1 = {1,1,1,1,0,0,0,5,4,3,19,17,16,15,15,15,19,19,19,19};
 
// int k =20;
//     Solution().minChanges(nums1,k);
vector<int>nums({2,0});
vector<int>nums1({100,4,200,1,3,2});
    Solution().longestConsecutive(nums1);
   string s="12";

    return 0;
}



