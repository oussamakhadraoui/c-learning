 #include <bits/stdc++.h>
 using namespace std;
class Solution {
public:
    int n,m;
    vector<vector<bool>>vis;
    void dfs(vector<vector<char>>& grid,int i ,int j){
        if(i==n||j==m||i<0||j<0||vis[i][j]||grid[i][j]=='0')return;
        vis[i][j]=true;
        dfs(grid,i,j-1);
        dfs(grid,i,j+1);
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);   
    }
    int numIslands(vector<vector<char>>& grid) {
        this->n = grid.size(),this->m=grid[0].size();
        vis=vector<vector<bool>>(n,vector<bool>(m,false));
        int result=0;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j]=='1'&&!vis[i][j]){
                    result++;
                    dfs(grid,i,j);
                }
                else{
                    vis[i][j]=true;
                }
            }
        }
        return result;
    }
};
/////////////////////////////////// with modifying the input