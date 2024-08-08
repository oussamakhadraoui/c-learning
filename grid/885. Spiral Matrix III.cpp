#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int n,m;
    bool isSafe(int i ,int j){
        return i>=0&&j>=0&&i<n&&j<m;
    }
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        this->n=rows;
        this->m=cols;
        vector<pair<int,int>>directions={{0,1},{1,0},{0,-1},{-1,0}};
        // directions right down left upp
        int dir=0;
        //start with the right dir;
        int count=1;
        vector<vector<int>>result;
        int limit = rows*cols;
        int x=rStart;
        int y=cStart;
        result.push_back({x,y});
        while(result.size()<limit){
            for(int i =0;i<2;i++){ //handle couple directions then we increament the count
                for(int j=0;j<count;j++){
                    x+=directions[dir].first;
                    y+=directions[dir].second;
                    if(isSafe(x,y))result.push_back({x,y});
                }
                dir=(dir+1)%4; //make th turn to the next direction
            }
            count++;
        }
        return result;
    }
};