#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rec(vector<int>& nums, int target,int i ){
        
        if(i>=nums.size()){
            if(target==0)return 1;
            else  return 0;
        }
        int result=0;
        result+=rec(nums,target-nums[i],i+1);
        result+=rec(nums,target+nums[i],i+1);
        
        return result;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return rec(nums,target,0);
    }
};