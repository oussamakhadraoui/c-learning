#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[301];
    int n ;
    string s;
    bool solve(vector<string>& wordDict,int start){
        if(start==n)return true;
        if(dp[start]!=-1)return dp[start];
        bool result=false;
         for(int i=0;i<wordDict.size();i++){
            bool isOk=true;
            int clone =start;
            for(char &c:wordDict[i]){
                if(s[clone]!=c){
                    isOk=false;
                    break;
                };
                clone++;
            }
            if(isOk)result|=solve(wordDict,clone);
         }
         return dp[start]=result;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        this->n = s.size();
        this->s = s;
        memset(dp,-1,sizeof(dp));
        return solve(wordDict,0);
    }
};