 #include <bits/stdc++.h>
 using namespace std;
const int N = 20004;
vector<int> adj[N];
int dp[N];
int ans[N];
class Solution {
public:

    void dfs(int u, int p=-1){
        dp[u]=0;
        for(auto&v:adj[u]){
            if(v==p)continue;
            dfs(v,u);
            int nx = 1+dp[v];
            dp[u]=max(dp[u],nx);
        }
        ans[u]=dp[u];
    }

    void solve(int u,int up=0, int p=-1){
        ans[u]=max(ans[u],up);
        int mx1=up;
        int mx2=0;
        for(auto&v:adj[u]){
            if(v==p)continue;
            int nx = 1+dp[v];
            if(nx>mx1){
                swap(mx1,mx2);
                mx1=nx;
            }else{
                mx2=max(mx2,nx);
            }
        }
        for(auto &v:adj[u]){
            if(v==p)continue;
            if(dp[v]+1==mx1){
                solve(v,mx2+1,u);
            }else{
                solve(v,mx1+1,u);
            }
        }
    }
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        for(int i=0;i<n;i++){
            adj[i].clear();
        }
        for(auto &u:edges){
            adj[u[0]].push_back(u[1]);
            adj[u[1]].push_back(u[0]);
        }
        dfs(0);
        solve(0);
        int mn=n;
        vector<int> res;
        for(int i=0;i<n;i++){
            if(ans[i]<mn){
                res.clear();
                res.push_back(i);
                mn=ans[i];
            }else if(ans[i]==mn){
                res.push_back(i);
            }
        }
        return res;
        
    }
};