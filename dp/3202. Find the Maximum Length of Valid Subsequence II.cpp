#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        
        int n = nums.size();
        int result=0;
        vector<vector<int>>dp(k+1,vector<int>(k+1,0));
        for(int i =0;i<n;i++){
            int val = nums[i]%k;
            for(int v=0;v<k;v++){
                dp[val][v]=max(dp[val][v],1+dp[v][val]);
                result= max(result,dp[val][v]);
            }
        }
        return result;
    }
};