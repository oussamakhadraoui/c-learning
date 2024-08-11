#include <bits/stdc++.h> 
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
class Solution {
public:
    int n ,m;
    bool vis[31][31];
    bool isSafe(int i,int j){
        return i>=0&&j>=0&&j<m&&i<n;
    }
    void dfs(int i,int j,vector<vector<int>>& grid){
        if(!isSafe(i,j)||vis[i][j]||!grid[i][j])return ;
        vis[i][j]=1;
        for(int x=0;x<4;x++){
            int newI=dx[x]+i;
            int newJ=dy[x]+j;
            dfs(newI,newJ,grid);    
        }
    }
    int minDays(vector<vector<int>>& grid) {
        this->n=grid.size();
        this->m=grid[0].size();
        memset(vis, 0, sizeof(vis)); 
        int count=0;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]&&!vis[i][j]){
                    dfs(i,j,grid);
                    count++;
                }
            }
        }
        if(count!=1)return 0;
        
        memset(vis,0,sizeof(vis));
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j]==1){
                    int count=0;
                    grid[i][j]=0;
                    memset(vis,0,sizeof(vis));
                    for(int x =0;x<n;x++){
                        for(int y=0;y<m;y++){
                            if(grid[x][y]&&!vis[x][y]){
                                dfs(x,y,grid);
                                count++;
                            }
                        }
                    }
                    if(count!=1)return 1;
                    grid[i][j]=1;
                }
            } 
        }
        return 2;
    }
};