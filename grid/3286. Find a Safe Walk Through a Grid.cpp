#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
class Solution {
public:
    int dp[51][51][102];
    int m,n;
    bool vis[51][51];
    bool isOk(int i ,int j ){
        return i>=0&&j>=0&&i<n&&j<m;
    }
    bool dfs(int health,int i,int j,vector<vector<int>>& grid){
        
        if(health<1)return dp[i][j][health]=false;
        if(i==n-1&&j==m-1&&health>=1)return dp[i][j][health]=true;
        if(dp[i][j][health]!=-1)return dp[i][j][health];
        vis[i][j]=1;
        for(int x =0;x<4;x++){
            int X=i+dx[x];
            int Y=j+dy[x];
            if(isOk(X,Y)&&!vis[X][Y]){
                if(dfs(health-grid[X][Y],X,Y,grid))return dp[i][j][health]=true;
            }
        }
        vis[i][j]=0;
        return dp[i][j][health]=false;
    }
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        memset(dp,-1,sizeof(dp));
        this->n=grid.size();
        this->m=grid[0].size();
        return dfs(health-grid[0][0],0,0,grid);
    }
};