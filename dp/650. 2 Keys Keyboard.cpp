#include <bits/stdc++.h>
using namespace std;
const int N=1001;
class Solution {
public:
    int dp[N][N];
    int n;
    int solve(int count,int paste){
        if(count>n)return 1e5;
        if(count==n)return 0;
        if(~dp[count][paste])return dp[count][paste];
        int opt1=1+solve(count+paste,paste);
        int opt2=2+solve(count+count,count);
        return dp[count][paste]=min(opt1,opt2);
    }
    int minSteps(int n) {
        this->n=n;
        memset(dp,-1,sizeof(dp));
        if(n==1)return 0;
        return 1+solve(1,1);    
    }
};