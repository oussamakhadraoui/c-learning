#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool lineI=false;
        bool lineJ=false;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i =0;i<n;i++){
            if(matrix[i][0]==0){
                lineI=true;
                break;
            }
        }
        for(int j =0;j<m;j++){
            if(matrix[0][j]==0){
                lineJ=true;
                break;
            }
        }
        for(int i =1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int i =1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[0][j]==0||matrix[i][0]==0)matrix[i][j]=0;
            }
        }
        if(lineI){
            for(int i =0;i<n;i++)matrix[i][0]=0;
        }
        if(lineJ){
            for(int j=0;j<m;j++)matrix[0][j]=0;
        }
    }
};