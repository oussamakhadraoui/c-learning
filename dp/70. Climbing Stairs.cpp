#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        vector<int>result(n+1,0); 
        for(int i=0;i<=n;i++){
            if(i<=2)result[i]=i;
            else result[i]=result[i-1]+result[i-2];  
        }
        return result[n];
    }
};

class Solution {
public:
    int dp[46];
    int rec(int n){
        if(n==0)return 1;
        if(n<0)return 0;
        if(dp[n]!=-1)return dp[n];
        int result=0;
        result=rec(n-1)+rec(n-2);
        return dp[n]=result;
        
    }
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        return rec(n);
    }
};