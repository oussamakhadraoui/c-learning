#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[51];
    int solve(int start,string&s,unordered_map<string,int>&rec){
        if(start>=s.size())return  0;
        if(dp[start]!=-1)return dp[start];
        string compare="";
        int result=s.size();
        for(int i =start;i<s.size();i++){
            compare+=s[i];
            int count=rec[compare]?solve(i+1,s,rec):compare.size()+solve(i+1,s,rec);
            result=min(result,count);
        }
        return dp[start]=result;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_map<string,int>rec;
        memset(dp,-1,sizeof(dp));
        for(string&s:dictionary)rec[s]++;
        return solve(0,s,rec);
    }
};