#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int>col;
        unordered_map<int,int>row;
        int n =matrix.size();
        int m =matrix[0].size();
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!matrix[i][j]){
                    col[i]=1;
                    row[j]=1;
                }
            }
        }
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(col[i]||row[j])matrix[i][j]=0;
            }
        }
        
    }
};