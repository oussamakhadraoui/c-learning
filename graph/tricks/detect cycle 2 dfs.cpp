#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
class Solution {
  public:
    bool vis[N];
    bool dfs(int parent,int child,vector<int> adj[]){
        vis[child]=1;
        for(int &d:adj[child]){
            if(!vis[d]){
                if(dfs(child,d,adj))return true;
            }else if(parent!=d)return true;
            
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        memset(vis,0,sizeof(vis));
        for(int i =0;i<V;i++){
            if(vis[i])continue;
            if(dfs(-1,i,adj))return true;
        }
        return false;
    }
};