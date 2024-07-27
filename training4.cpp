


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
    vector<double> dijekstra(int start,int end ,vector<vector<pair<int,double>>>graph,int n){
        
            priority_queue<pair<double,int> , vector<pair<double,int>>, greater<pair<double,int>> >pq;
            vector<double>result;
            vector<int>vis(n);
            pq.push({0,start});
            while(pq.size()){
                double prob1=pq.top().first;
                int node=pq.top().second;
                pq.pop();
                if(vis[node])continue;
                if(node==end){
                    result.push_back(prob1);
                }
                vis[node]=1;
                for(auto&nn:graph[start]){
                    double prob2=nn.second;
                    // if(nn.first==end)result.push_back(prob1+prob2);
                    pq.push({prob1+prob2,nn.first});
                }
            }
            return result;
        }
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int,double>>>graph(n);
        for(int i =0;i<n;i++){
            auto edge=edges[i];
            graph[edge[0]].push_back({edge[1],succProb[i]});
            graph[edge[1]].push_back({edge[0],succProb[i]});
        }
        vector<double>result=dijekstra(start,end,graph,n);
        return *max_element(result.begin(), result.end());
        
    }
};
int main() {
//     vector<int> nums1 = {1,1,1,1,0,0,0,5,4,3,19,17,16,15,15,15,19,19,19,19};
 
// int k =20;
//     Solution().minChanges(nums1,k);
int n=3;
vector<vector<int>>edgo({{0,1},{1,2},{0,2}});
vector<double>nums1({0.5,0.5,0.2});
int start=0;
int end =2;
vector<int>nums({2,0});

    Solution().maxProbability(n,edgo,nums1,start,end);
   string s="12";

    return 0;
}



