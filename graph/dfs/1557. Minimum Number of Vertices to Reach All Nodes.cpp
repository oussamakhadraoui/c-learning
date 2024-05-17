#include <bits/stdc++.h>
using namespace std;


const int N =1e5+1;
class Solution {
 
public:
    
    bool vis[N];
    void dfs(int i,unordered_map<int,int>&rec,vector<vector<int>>&graph){
       if(vis[i])return;
        vis[i]=true;
        for(int& gr:graph[i]){
            rec[gr]--;
            dfs(gr,rec,graph);
        }
    }
    
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<vector<int>>graph(n,vector<int>());
        for(auto edge:edges){
            graph[edge[0]].push_back(edge[1]);
        }
        unordered_map<int,int>rec;
        for(int i =0;i<n;i++){
            rec[i]++;
        }
        for(int i =0;i<n;i++){
            memset(vis,false,sizeof(vis));
            dfs(i,rec,graph);
        }
        vector<int>result;
        for(int i =0;i<n;i++){
            if(rec[i]==1)result.push_back(i);
        }
        return result;
    }
};