#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[1001][1001];
    int rec(int i ,int j ,string &s){
        if(i>j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int take=0;
        int take2=0;
        if(s[i]==s[j]){
            if(i==j)take= 1+rec(i+1,j-1,s);
            else take=2+rec(i+1,j-1,s);
        }else take2=max(rec(i,j-1,s),rec(i+1,j,s));
        return dp[i][j]=max(take,take2);     
    }
    int longestPalindromeSubseq(string s) {
        memset(dp,-1,sizeof(dp));
        return rec(0,s.size()-1,s);
    }
};