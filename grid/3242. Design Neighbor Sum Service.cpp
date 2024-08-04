#include <bits/stdc++.h>
using namespace std;
class neighborSum {
public:
    vector<vector<int>> grid;
    unordered_map<int, pair<int, int>> rec;
    neighborSum(vector<vector<int>>& grid) :grid(grid) {
        for(int i = 0; i < grid.size(); ++i) {
            for(int j = 0; j < grid[0].size(); ++j) {
                rec[grid[i][j]] = {i, j};
            }
        }
    }
    
    int adjacentSum(int value) {
        pair<int,int>v=rec[value];
        int v1,v2,v3,v4;
        if(v.first-1>=0)v1=grid[v.first-1][v.second];
        else v1=0;
        if(v.first+1<grid.size())v2=grid[v.first+1][v.second];
        else v2=0;
        if(v.second-1>=0)v3=grid[v.first][v.second-1];
        else v3=0;
        if(v.second+1<grid[0].size())v4=grid[v.first][v.second+1];
        else v4=0;
        return v1+v2+v3+v4;
    }
    
    int diagonalSum(int value) {
        pair<int,int>v=rec[value];
        int v1,v2,v3,v4;
        if(v.first-1>=0&&v.second-1>=0)v1=grid[v.first-1][v.second-1];
        else v1=0;
        if(v.first+1<grid.size()&&v.second+1<grid[0].size())v2=grid[v.first+1][v.second+1];
        else v2=0;
        if(v.second-1>=0&&v.first+1<grid.size())v3=grid[v.first+1][v.second-1];
        else v3=0;
        if(v.second+1<grid[0].size()&&v.first-1<grid.size())v4=grid[v.first-1][v.second+1];
        else v4=0;
        return v1+v2+v3+v4;        
    }
};

/**
 * Your neighborSum object will be instantiated and called as such:
 * neighborSum* obj = new neighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */