#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int n;
    void dfs(int i ,vector<vector<int>>& graph,vector<int>& path,vector<vector<int>>&result){
       path.push_back(i);
        if(i==n-1){
            result.push_back(path);  
        }
        for(int &gr:graph[i]){
                dfs(gr,graph,path,result);   
        }   
        path.pop_back();
       
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        this->n=graph.size();
        vector<vector<int>>result;
        vector<int>path;
        dfs(0,graph,path,result);
        return result;
    }
};