#include<bits/stdc++.h>
using namespace std;

const int N=2001;
class Solution {
public:
    bool vis[N];
    bool parent[N];
    bool dfs(vector<int>graph[],int i ){
        vis[i]=true;
        parent[i]=true;
        for(auto &x:graph[i]){
            if(vis[x]&&parent[x])return true;
            if(!vis[x]&&dfs(graph,x))return true;
        }
        parent[i]=false;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int>graph[n];
        for(auto&x:p)graph[x[0]].push_back(x[1]);
        for(int i =0;i<n;i++){
            if(dfs(graph,i))return false;
        }
        return true;
    }
};