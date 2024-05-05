#include <bits/stdc++.h>
using namespace std;



const int N=1e4+1;

bool vis[N];
class Solution {
    
    
  public:

    void dfs(int pos, vector<int>&result,vector<int> graph[]){
        
        result.push_back(pos);
        vis[pos]=true;
        for(int node:graph[pos]){
            int x=node;
            if(!vis[x]){
                
                dfs(x,result,graph);
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        memset(vis,false,sizeof(vis));
      
        vector<int>result;
        dfs(0,result,adj);
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}