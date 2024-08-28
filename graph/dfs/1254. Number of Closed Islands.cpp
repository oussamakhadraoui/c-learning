#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
const int N=101;
class Solution {
public:
    bool vis[N][N];
    int n,m;
    bool dfs(int i ,int j,vector<vector<int>>& grid){
        if ( vis[i][j] || grid[i][j] == 1) return true;
        if (i == 0 || j == 0 || i == n - 1 || j == m - 1) {
            return false;
        }
        bool result=1;
        vis[i][j]=1;
        for(int v=0;v<4;v++){
            int X=i+dx[v];
            int Y=j+dy[v];
            result=result & dfs(X,Y,grid);
        }  
        return result;      
    }
    int closedIsland(vector<vector<int>>& grid) {
        this->n=grid.size();
        this->m=grid[0].size();
        int result=0;
        for(int i =1;i<n;i++){
            for(int j=1;j<m;j++){
                if(!vis[i][j]&&!grid[i][j]){
                    if(dfs(i,j,grid))result++;
                }
            }
        }
        return result;
    }
};