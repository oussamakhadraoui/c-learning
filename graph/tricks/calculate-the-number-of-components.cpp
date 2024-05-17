#include <bits/stdc++.h>
using namespace std;
const int N=1e5+1;
class Solution {
public:
    
    bool vis[N];
    void dfs(vector<vector<int>>& graph,int x){
        if(vis[x]){
            return ;
        }
        vis[x]=1;
        for(int i:graph[x]){
            
            if(!vis[i])dfs(graph,i);
            
        }

    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int cnt=connections.size();
        if(cnt<n-1)return -1;
        memset(vis,0,sizeof(vis));
        int components=0;
        vector<vector<int>>graph(n);
        
        for(int i =0;i<connections.size();i++){
            graph[connections[i][0]].push_back(connections[i][1]);
            graph[connections[i][1]].push_back(connections[i][0]);
        }
        for(int i =0;i<n;i++){
            if(!vis[i]){
                dfs(graph,i);
                components++;
            }
        }

   
        return components-1;
        
    }
};