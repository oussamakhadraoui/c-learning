#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long dp[100001][3][3];
    long long mod=1e9+7;
    long long rec(int n,int abs,int late){
        if(n==0)return 1;
        if(dp[n][abs][late]!=-1)return dp[n][abs][late];
        long long result=rec(n-1,abs,0)%mod;
        if(abs<1)result=(result+rec(n-1,abs+1,0))%mod;
        if(late<2)result=(result+rec(n-1,abs,late+1))%mod;
            
        return dp[n][abs][late]=result%mod;
    }
    int checkRecord(int n) {
        memset(dp,-1,sizeof(dp));
        return rec(n,0,0);
    }
};