#include <bits/stdc++.h>
using namespace std;
const int N=1e5+1;
class Solution {
public:
    int n ;
    long dp[N][2][2];
    long long solve(int i ,int start,int pos,vector<int>& nums){
        if(i==n)return 0;
        if(dp[i][start][pos]!=-1)return dp[i][start][pos];
        long long result=LONG_MIN;
        if(start==0){
            result=max(result,nums[i]+solve(i+1,1,pos^1,nums));
        }else{
            if(pos==1){
                result=max(result,-nums[i]+solve(i+1,1,pos^1,nums));
            }else{
                result=max(result,nums[i]+solve(i+1,1,pos^1,nums));
            }
            result=max(result,solve(i,0,0,nums));
        }
        return dp[i][start][pos]=result;
    }
    long long maximumTotalCost(vector<int>& nums) {
        this->n=nums.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,0,0,nums);
    }
};