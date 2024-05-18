
 #include <bits/stdc++.h>
 using namespace std;
class Solution {
public:
    vector<int>vis;
    bool dfs(unordered_map<int,vector<int>>&graph,int i){
        if(vis[i]==1)return true;
        if(vis[i]==0){
            vis[i]=1;
            for(int& x:graph[i]){
                if(dfs(graph,x)) return true;
            }
        }
        vis[i]=4;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>graph;
        vis=vector<int>(n,0);
        for(auto & i :prerequisites){
            graph[i[1]].push_back(i[0]);
        }
        for(int i =0;i<n;i++){
            if(dfs(graph,i))return false;
        }
        return true;
    }
};