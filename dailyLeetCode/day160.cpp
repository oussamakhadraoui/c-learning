#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int> > ans;
        int n = grid.size();
        for(int i=0;i<=n-3;i++){
            ans.emplace_back();
            for(int j=0;j<=n-3;j++){
                int r = grid[i][j];
                for(int k=0;k<3;k++){
                    for(int o=0;o<3;o++){
                        r=max(r, grid[i+k][j+o]);
                    }
                }
                ans.back().push_back(r);
            }
        }
        return ans;
    }
};