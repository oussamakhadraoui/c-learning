#include <bits/stdc++.h> 
using namespace std;
const int N=1e5+1;
const int MOD=1e9+7;
class Solution {
public:
    int dp[N];
    long long dfs(int start,string &press){
        if (start<=0)return 1;
        if(dp[start]!=-1)return dp[start];
        int go=0;
        int result=0;
        int i=start;
        while(i>=0&&press[i]==press[start]&&go<4){
            i--;
            go++;
        }
        if(go==4&&press[start]!='7'&&press[start]!='9')go=3;
        for(int j=1;j<=go;j++){
            result=(result+dfs(start-j,press))%MOD;
        }
        return dp[start]=result;
    }
    int countTexts(string pressedKeys) {
        memset(dp,-1,sizeof(dp));
        int n=pressedKeys.size();
        return dfs(n-1,pressedKeys);
    }
};