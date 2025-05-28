#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
     vector<vector<int>>li(vector<vector<int>>&edges){
         vector<vector<int>>adj(edges.size()+1);
         for(auto&e:edges){
             adj[e[0]].push_back(e[1]);
             adj[e[1]].push_back(e[0]);
         }
         return adj;
     }
     int dfs(vector<vector<int>>&adj,int u ,int p,int k){
         if(k<0)return 0;
         int count=1;;
         for(int v:adj[u]){
             if(v!=p)count+=dfs(adj,v,u,k-1);
         }
         return count;
     }
     vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2, int k) {
         vector<vector<int>>adj1=li(edges1);
         vector<vector<int>>adj2=li(edges2);
         int n = adj1.size();
         int m = adj2.size();
         int maxi=0;
         vector<int>result(n);
         for(int i=0;i<m;i++)maxi=max(maxi,dfs(adj2,i,-1,k-1));
         for(int i=0;i<n;i++)result[i]=dfs(adj1,i,-1,k)+maxi;
         return result;
     }
 };