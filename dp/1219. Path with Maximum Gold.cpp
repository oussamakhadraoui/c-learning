#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    static const int d = 4;
    int dx[d] = {0, 0, 1, -1};
    int dy[d] = {-1, 1, 0, 0};
    int m,n;
    int backtrack(int i ,int j ,vector<vector<int>>& grid){
        if(i<0||j<0||j>=m||i>=n||grid[i][j]==0)return 0;
        int maxVal=0;
        int currentVal=grid[i][j];
        for(int x=0;x<4;x++){
            int xi=i+dx[x];
            int yi=j+dy[x];
            grid[i][j]=0;
            maxVal=max(maxVal,currentVal+backtrack(xi,yi,grid));
            grid[i][j]=currentVal;
        }
        return maxVal;
    }
    
    int getMaximumGold(vector<vector<int>>& grid) {
        this->n=grid.size();
        this->m=grid[0].size();
        int maxi=0;
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0) maxi=max(maxi,backtrack(i,j,grid));
            }
        }
        return maxi;
    }
};