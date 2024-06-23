#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int maxX=0;
        int minX=1001;
        int maxY=0;
        int minY=1001;
        for(int i =0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    maxX=max(maxX,j);
                    minX=min(minX,j);
                    maxY=max(maxY,i);
                    minY=min(minY,i);
                }
            }
        }
        return (maxX-minX+1)*(maxY-minY+1);
    }
};