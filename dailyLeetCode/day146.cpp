 #include <bits/stdc++.h>
 using namespace std;
int dp[202][202];
bool vis[202][202];
class Solution {
public:

    int solve(int r, int c, vector<vector<int>> &grid){
        if(r>=grid.size())return 0;
        int &rs =dp[r][c];
        if(vis[r][c])return rs;
        vis[r][c]=1;
        rs=1e9;
        for(int i=0;i<grid.size();i++){
            if(i==c)continue;
            rs=min(rs, grid[r][i]+solve(r+1,i,grid));
        }
        return rs;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        memset(vis,0,sizeof(vis));
        return min(solve(0,0,grid), solve(0,1,grid));
    }
};