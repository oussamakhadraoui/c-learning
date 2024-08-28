#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
const int N = 501;
class Solution {
public:
    int n, m;
    bool vis[N][N];
    bool isOk(int i, int j) { 
        return i >= 0 && j >= 0 && i < n && j < m;
    }
    bool dfs(int i,int j,vector<vector<int>>& grid1,vector<vector<int>>& grid2){
        vis[i][j] = true;
        bool res=true;
        if(grid1[i][j]==0)res=false;
        for(int v=0;v<4;v++){
            int X=i+dx[v];
            int Y=j+dy[v];
            if(isOk(X,Y)&&grid2[X][Y]==1&&!vis[X][Y]){
                if(!dfs(X,Y,grid1,grid2))res=false;
            }
        }
        return res;
    }
    int countSubIslands(vector<vector<int>>& grid1,vector<vector<int>>& grid2){
        memset(vis, 0, sizeof(vis));
        int result = 0;
        this->n = grid2.size();
        this->m = grid2[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j]&&grid2[i][j]) {
                    if (dfs(i, j, grid1, grid2))
                        result++;
                }
            }
        }
        return result;
    }
};