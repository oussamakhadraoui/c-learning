#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string s1,s2;
    vector<vector<int>>dp;
    int solve (int i,int j ){
        if(i==s1.size()||j==s2.size())return dp[i][j]=0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s1[i]==s2[j])dp[i][j]=1+solve(i+1,j+1);
        else dp[i][j]=max(solve(i+1,j),solve(i,j+1));
        return dp[i][j];
    }
    string shortestCommonSupersequence(string s1, string s2) {
        this->s1=s1;
        this->s2=s2;
        int n=s1.size(),m=s2.size();
        dp.assign(n+1, vector<int>(m+1, -1));
        solve(0,0);
        string result="";
        int i =0,j=0;
        while(i<n&&j<m){
            if(s1[i]==s2[j]){
                result+=s1[i];
                i++;j++;
            }else if(dp[i+1][j]>dp[i][j+1]){
                result+=s1[i];
                i++;
            } else{
                result+=s2[j];
                j++;
            }
        }
        while(i<n)result+=s1[i++];
        while(j<m)result+=s2[j++];
        return result;
    }
};