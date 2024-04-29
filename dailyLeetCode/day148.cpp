 #include <bits/stdc++.h>
 using namespace std;
class Solution {
public:
    vector<vector<int>>graph;
    int N;
    vector<int>ans,count;
    void dfs(int node,int par){
        for(auto child:graph[node]){
            if(child!=par){
                dfs(child,node);
                count[node]+=count[child];
                ans[node]+=ans[child]+count[child];
            }
        }
    }
    
    void dfs2(int node,int par){
        for(auto child:graph[node]){
            if(child!=par){
                ans[child]=ans[node]-count[child]+(N-count[child]);
                dfs2(child,node);
            }
        }      
    }
    
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        N=n;
        ans=vector<int>(n,0);
        count=vector<int>(n,1);
        
        graph=vector<vector<int>>(n);
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        dfs(0,-1);
        dfs2(0,-1);
        return ans;
        
    }
};