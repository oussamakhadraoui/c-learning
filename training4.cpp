


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

 class Solution {
public:
    string countOfAtoms(string f) {
        stack<pair<string,int>>atoms;
        int n =f.size();
        for(int i =0;i<n;){
            if(f[i]=='('){
                atoms.push({"counter break",0});
                i++;
                continue;
            }
            if(f[i]==')'){
                string counter="";
                i++;
                while(i<n&&isdigit(f[i])){
                    counter+=f[i];
                    i++;
                }
                int num = 0;
                for (char c : counter) {
                    if (c >= '0' && c <= '9') {
                        num = num * 10 + (c - '0');
                    }
                }
                if(num==0)num=1;
                atoms.push({"counter start",num});
                continue;
            }
            if(isupper(f[i])){
                string at="";
                at+=f[i];
                i++;
                while(i<n&&islower(f[i])){
                    at+=f[i];
                    i++;
                }
                string counter="";
                while(i<n&&isdigit(f[i])){
                    counter+=f[i];
                    i++;
                }
                int num = 0;
                for (char c : counter) {
                    if (c >= '0' && c <= '9') {
                        num = num * 10 + (c - '0');
                    }
                }
                if(num==0)num=1;
                atoms.push({at,num});
            }
        }
        stack<int>time;
        int counter=1;
        unordered_map<string ,int>count;
        vector<pair<string,int>>clone;
        while(!atoms.empty()){
            if(atoms.top().first=="counter start"){
                counter*=atoms.top().second;
                time.push(atoms.top().second);
                atoms.pop();
                continue;
            }
            if(atoms.top().first=="counter break"){
                counter/=time.top();
                time.pop();
                atoms.pop();
                continue;
            }
            count[atoms.top().first]+=atoms.top().second*counter;
            atoms.pop();
        }
        for(auto&[a,b]:count)clone.push_back({a,b});
        
        string result="";
        sort(clone.begin(),clone.end());
        for(auto& pairo:clone)result+=pairo.first+(pairo.second>1?to_string(pairo.second):"");
        return result;
    }
};



int main(){
    vector<int>horizontalCut({1,3});
    vector<int>verticalCut({5});
    int  m = 3; int n = 2;
    string s="K4(ON(SO3)2)2";

    Solution().countOfAtoms(s);
    return 0;
}