


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
#include <bits/stdc++.h>

using namespace std;
int main(){
    freopen("a.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int k,jump,swim;
        cin>>k>>jump>>swim;
        string s="";
        for(int i =0;i<k;i++){
            char c;
            cin>>c;
            s+=c;
        }
        bool isOk=true;
        for(int i =0;i<k;i++){
            
            if(s[i]=='L')continue;
            else if(s[i]=='L'&&jump)jump--;
            else if((s[i]=='W'||s[i]=='C')&&swim)swim--;
            else{
                isOk=false;
                break;
            }
        }
        if(isOk){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
   
    return 0;
}