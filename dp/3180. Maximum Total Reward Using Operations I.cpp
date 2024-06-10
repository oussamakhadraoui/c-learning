#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int result;
    int n ;
    int dp[2001][2001];
    int solve(int i,int sum,vector<int>& rewardValues){
        if(sum>rewardValues[n-1])return sum;
        if(i>=n)return sum;
        if(dp[i][sum]!=-1)return dp[i][sum];
        int result=0;
        result=max(result,solve(i+1,sum,rewardValues));
        if(sum<rewardValues[i])result=max(result,solve(i+1,sum+rewardValues[i],rewardValues));
        return dp[i][sum]=result;
    }
    int maxTotalReward(vector<int>& rewardValues) {
        this->n=rewardValues.size();
        sort(rewardValues.begin(),rewardValues.end());
        memset(dp,-1,sizeof(dp));
        return solve(0,0,rewardValues);
    }
};