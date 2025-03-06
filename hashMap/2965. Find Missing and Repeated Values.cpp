#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>result;
        unordered_map<int,int>rec;
        int n =grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x =grid[i][j];
                if(rec[x])result.push_back(x);
                rec[x]++;
            }
        }
        n =pow(n,2);
        for(int i=1;i<=n;i++){
            if(!rec[i]){
                result.push_back(i);
                break;
            }
        }
        return result;
    }
};