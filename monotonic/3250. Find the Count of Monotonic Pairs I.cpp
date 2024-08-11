#include <bits/stdc++.h> 
using namespace std;
const int MOD = 1e9 + 7;
class Solution {
public:
    int dp [2001][54][54];
    int rec(int prev1,int prev2,vector<int>& nums,int index){
        if(index>=nums.size())return 1;
        if(dp[index][prev1][prev2]!=-1)return dp[index][prev1][prev2];
        int result=0;
        for(int v=prev1;v<=nums[index];v++){
            int p2=nums[index]-v;
            if(p2<=prev2)result=(rec(v,p2,nums,index+1)+result)%MOD;
        }
        return dp[index][prev1][prev2]=result;
    }
    int countOfPairs(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return rec(0,51,nums,0);
    }
};