#include <bits/stdc++.h>
using namespace std;
const int N=1000;
class Solution {
public:
    
    bool vis[N];
    vector<vector<int>>result;
    void dfs(vector<vector<int>>&graph,int x,int parent){
        vis[x]=1;
        for(int&i:graph[x]){
            if(vis[i])continue;
            result[i].push_back(parent);
            dfs(graph,i,parent); 
        }
    }
    
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>>graph(n);      
        for(auto & x:edges){
            graph[x[0]].push_back(x[1]);
        }
        result=vector<vector<int>>(n);
        for(int i=0;i<n;i++){
            memset(vis,0,sizeof(vis));
            dfs(graph,i,i);
        }
        return result;
    }
};