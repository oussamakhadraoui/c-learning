#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int dp[101];
    int r(vector<int>& nums,int start,int end){
        if(start>=end)return 0;
        if(dp[start]!=-1)return dp[start];
        int result;
        result=max(r(nums,start+1,end),nums[start]+r(nums,start+2,end));
        return dp[start]=result;
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int n=nums.size();
        if(n==1)return nums[0];
        int x=r(nums,1,n);
        memset(dp,-1,sizeof(dp));
        int y=r(nums,0,n-1);
        return max(x,y);
    }
};