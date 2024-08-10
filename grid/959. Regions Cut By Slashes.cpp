#include <bits/stdc++.h> 
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
class Solution {
public:
    int m,n;
    bool mrigelYaYousri(int i,int j){
        return i>=0&&j>=0&&j<m*3&&i<n*3;
    }

    void dfs(vector<vector<int>> &v,int i,int j){
        if(mrigelYaYousri(i,j)&&v[i][j]==0){
            v[i][j]=1;
            for (int x = 0; x < 4; x++) {
                int newRow = i + dx[x];
                int newCol = j + dy[x];
                dfs(v,newRow, newCol);
            }
        }
    }
    int regionsBySlashes(vector<string>& grid) {
        this-> n = grid.size();
        this-> m = grid[0].size();
        vector<vector<int>>grid2(3*n,vector<int>(3*m,0));
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='/'){
                    grid2[3 * i][3 * j + 2] = 1;
                    grid2[3 * i + 1][3 * j + 1] = 1;
                    grid2[3 * i + 2][3 * j] = 1;
                }else if (grid[i][j] == '\\') {
                    grid2[3 * i][3 * j] = 1;
                    grid2[3 * i + 1][3 * j + 1] = 1;
                    grid2[3 * i + 2][3 * j + 2] = 1;
                }
            }
        }
        int count = 0;
        for (int i = 0; i < 3 * n; i++) {
            for (int j = 0; j < 3 * m; j++) {
                if (grid2[i][j] == 0) {
                    count++;
                    dfs(grid2, i, j);
                }
            }
        }
        return count;
        
    }
};