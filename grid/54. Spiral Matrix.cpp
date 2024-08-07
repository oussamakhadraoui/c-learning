#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>result;
        int n=matrix.size();
        int m = matrix[0].size();
        int top=0,bottom=n;
        int right=m,left=0;
        while(top<bottom&&left<right){
            for(int i=left;i<right;i++)result.push_back(matrix[top][i]);
            top++;
            for(int i =top;i<bottom;i++)result.push_back(matrix[i][right-1]);
            right--;
            if(top>=bottom||left>=right)break;
            for(int i=right-1;i>=left;i--)result.push_back(matrix[bottom-1][i]);
            bottom--;
            for(int i=bottom-1;i>=top;i--)result.push_back(matrix[i][left]);
            left++;
        }
        return result;
    }
};