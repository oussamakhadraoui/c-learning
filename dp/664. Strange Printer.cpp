#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[100][100];
    int solve(int start,int end,string &s){
       
        if(start==end)return 1;
        if(~dp[start][end])return dp[start][end];
        int result=INT_MAX;
        for(int k=start;k<end;k++){
            result=min(result,solve(start,k,s)+solve(k+1,end,s));
        }
        return dp[start][end]=s[start]==s[end]?result-1:result;
    }
    int strangePrinter(string s) {
        memset(dp,-1,sizeof(dp));
        int end= s.size()-1;
        return solve(0,end,s);
    }
};