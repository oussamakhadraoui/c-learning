#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[2][101][101];
    int n;
    int solve(bool isAlice,int start,int m,vector<int>& piles){
        if(start>=n)return 0;
        if(~dp[isAlice][start][m])return dp[isAlice][start][m];
        
        int result=isAlice?0:INT_MAX;
        int sum=0;
        for(int i =1;i<=(m*2);i++){
            if(start+i>n)break;
            sum+=piles[start+i-1];
            if(isAlice){
                result=max(result,sum+solve(!isAlice,start+i,max(m,i),piles));
            }else{
                result=min(result,solve(!isAlice,start+i,max(m,i),piles));
            }
        }

        return dp[isAlice][start][m]=result;
    }
    int stoneGameII(vector<int>& piles) {
        this->n=piles.size();
        memset(dp,-1,sizeof(dp));
        return solve(1,0,1,piles);
    }
};