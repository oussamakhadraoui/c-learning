#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int result=pow(2,m-1)*n;
        
        int result2=0;
        for(int i=1;i<m;i++){
            int count=0;
            for(int j =0;j<n;j++){
                count+=(grid[j][0]?grid[j][i]:grid[j][i]^1);   
            }
            result2=result2*2+max(count,n-count);
        }
        
        return result+result2;
    }
};