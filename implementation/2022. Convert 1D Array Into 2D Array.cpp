 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int n, int m) {
        int nn = original.size();
        if(m*n!=nn)return {};
        int start=0;
        vector<vector<int>>result(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                result[i][j]=original[start++];
            }
        }
        return result;
    }
};