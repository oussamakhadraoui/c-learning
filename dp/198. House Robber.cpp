#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // int dp[101];
    // int rec(int n,vector<int>& nums){
    //     if(n>=nums.size())return 0;
    //     if(dp[n]!=-1)return dp[n];
    //     int result=INT_MIN;
    //     result=max(result,nums[n]+rec(n+2,nums));
    //     result=max(result,rec(n+1,nums));
    //     return dp[n]= result;
    // }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>result(n+1);
        result[0]=nums[0];
        for(int i =1;i<n;i++){
            if(i==1){
                result[i]=max(nums[i-1],nums[i]);
            }else result[i]=max(nums[i]+result[i-2],result[i-1]);
        }
        return result[n-1];
    }
};