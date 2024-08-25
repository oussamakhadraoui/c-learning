#include<bits/stdc++.h>
using namespace std;

const int N =1e5+1;
bool vis[N];
bool parent[N];

class Solution {
  public:
    bool dfs(vector<int> adj[],int pos){
        vis[pos]=true;
        parent[pos]=true;
        for(int& x:adj[pos]){
          if(vis[x]&&parent[x])return true;
          else if(!vis[x]&&dfs(adj,x))return true;
          
        }
        parent[pos]=false;
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        memset(vis,false,sizeof(vis));
        memset(parent,false,sizeof(parent));
        for(int i =0;i<V;i++){
            if(!vis[i]&& dfs(adj,i))return true;
        }
        return false;
    }
};