#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int dp[301][5001];
    int n;
    int rec(int amount, vector<int>& coins,int i){
        if(amount==0)return 1;
        if(i>=n||amount<0)return 0;
        if(dp[i][amount]!=-1)return dp[i][amount];
        int result=rec(amount-coins[i],coins,i)+rec(amount,coins,i+1);
        
        return dp[i][amount]=result;
    }
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        this->n=coins.size();
        return rec(amount,coins,0);
    }
};