#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[501][26];
    int n ;
    int solve(int i,int k ,vector<int>& nums){
        if(n==i)return 0;
        if(dp[i][k]!=-1)return dp[i][k];
        int result=1;
        for(int j=0;j<i;j++){
            if(nums[i]!=nums[j]&&k>0){
                result=max(result,1+solve(j,k-1,nums));
            }else if(nums[i]==nums[j]){
                result=max(result,1+solve(j,k,nums));
            }
        }
        return  dp[i][k]=result;
    }
    int maximumLength(vector<int>& nums, int k) {
        this->n=nums.size();
        memset(dp,-1,sizeof(dp));
        int maxi=0;
        for(int i =0;i<n;i++){
            maxi=max(maxi,solve(i,k,nums));
        }
        return maxi;
    }
};