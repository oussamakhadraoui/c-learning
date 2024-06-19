#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int up=0;
        int n = matrix[0].size()-1;
        int m = matrix.size()-1;
        int down=matrix.size()-1;
        while(up<=down){
            int mid=up+(down-up)/2;
            if(matrix[mid][n]==target)return true;
            if(matrix[mid][n]>target)down=mid-1;
            else up=mid+1;
        }

        if(up>m)return false;
        
        int left=0;
        int right=matrix[0].size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(matrix[up][mid]==target)return true;
            if(matrix[up][mid]>target)right=mid-1;
            else left=mid+1;
        }
        return false;
    }
};