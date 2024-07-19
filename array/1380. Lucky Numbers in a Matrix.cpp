#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n =matrix.size();
        int m =matrix[0].size();
        for(int i=0;i<n;i++){
            int row=0;
            int minValX=INT_MAX;
            for(int x=0;x<m;x++){
                if(minValX>matrix[i][x]){
                    row=x;
                    minValX=matrix[i][x];
                }
            }
            
            int col=0;
            int maxValY=INT_MIN;
            for(int y=0;y<n;y++){
                if(maxValY<matrix[y][row]){
                    col=y;
                    maxValY=matrix[y][row];
                }
            }
  
            if(col==i)return {matrix[i][row]};
        }
        return {};
    }
};