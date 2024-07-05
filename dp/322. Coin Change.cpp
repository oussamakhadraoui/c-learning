#include <bits/stdc++.h>

using namespace std;
const int N= 1e5+1;
class Solution {
public:
    
    int coinChange(vector<int>& coins, int amount) {
        int N=amount+1;
        vector<int>dp(N,N);      
        dp[0]=0;
        for(int i =1;i<=amount;i++){
            for(int &coin:coins){
                if((i-coin)>=0){
                    dp[i]=min(dp[i],1+dp[i-coin]);
                }
            }
        }
        int result= dp[amount];
        return result==amount+1?-1:result;
    }
};
const int N= 1e5+1;
class Solution {
public:
    int dp[N];
    int n ;
    int rec(vector<int>& coins, int amount){
        if(amount<=0)return 0;
        if(dp[amount]!=-1)return dp[amount];
        int result=INT_MAX;
        for(int i =0;i<n;i++){
            if(amount-coins[i]>=0){ 
                int v=rec(coins,amount-coins[i]);
                if(v!=INT_MAX){
                    result=min(result,1+v);
                }
            }
        }
        
        return dp[amount]=result;
    }
    int coinChange(vector<int>& coins, int amount) {
        this->n= coins.size();
        memset(dp,-1,sizeof(dp));
        int result= rec(coins,amount);
        return result==INT_MAX?-1:result;
    }
};