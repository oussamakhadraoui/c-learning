#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>result;
        for(int i =0;i<n;i++){
            vector<int>res(i+1,1);
            result.push_back(res);
        }
        for(int i =2;i<n;i++){
            for(int j =1;j<i;j++){
                result[i][j]=result[i-1][j-1]+result[i-1][j];
            }
        }
        return result;
    }
};
