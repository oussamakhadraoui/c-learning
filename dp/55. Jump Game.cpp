#include <bits/stdc++.h>

using namespace std;
const int N=1e4+1;
class Solution {
public:
    int dp[N];
    bool rec(vector<int>& nums,int start){
        if(start>=nums.size())return false;
        if(start==nums.size()-1)return true;
        
        if(dp[start]!=-1)return dp[start];
        bool result=false;
        for(int i =start;i<start+nums[start];i++){
            if(start<nums.size()){

                result=result||rec(nums,i+1);
                if(result)return true;
            }
        }
        return dp[start]=result;
    }
    bool canJump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return rec(nums,0);
    }
};