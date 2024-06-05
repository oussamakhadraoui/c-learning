#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
  
    int dp[1001];
    int solve(vector<int>& cost,int i){
        if(i>cost.size()-1){
            return 0;
        }
        
        if(dp[i]!=-1)return dp[i];
        return dp[i]=min(solve(cost,i+1),solve(cost,i+2))+cost[i];
        
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        memset(dp,-1,sizeof(dp));
        return min(solve(cost,0),solve(cost,1));
    }
};