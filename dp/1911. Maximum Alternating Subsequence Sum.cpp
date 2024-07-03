#include <bits/stdc++.h>
using namespace std;
const int N=1e5+1;
const int E=2;
class Solution {
public:
    long long dp[N][E];
    long long rec(vector<int>& nums,int i,bool even){
        if(i>=nums.size())return 0;
        if(dp[i][even]!=-1)return dp[i][even];
        int res;
        even ==1?res=nums[i]:res=(-1)*nums[i];
        return dp[i][even]= max(rec(nums,i+1,even),res+rec(nums,i+1,!even));
        
    }
    long long maxAlternatingSum(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
       
        return rec(nums,0,1);
    }
};