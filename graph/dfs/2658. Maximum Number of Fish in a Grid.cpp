
#include <bits/stdc++.h>
using namespace std;

const int N=10;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
class Solution {
public:
    bool vis[N][N];
    int n,m;
    bool isOk(int x,int y){
        return x>=0&&x<n&&y>=0&&y<m;
    }
    int dfs(int i,int j,vector<vector<int>>& grid){
        if(!isOk(i,j)||vis[i][j]||grid[i][j]==0)return 0;
        vis[i][j]=true;
        int sum=grid[i][j];
        for(int x=0;x<4;x++){
            sum+=dfs(i+dx[x],j+dy[x],grid);
        }
        return sum;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        this->n=grid.size();
        this->m=grid[0].size();
        memset(vis,sizeof(vis),false);
        int result=0;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]>0){
                    result=max(result,dfs(i,j,grid));
                }
            }
        }
        return result;
    }
};