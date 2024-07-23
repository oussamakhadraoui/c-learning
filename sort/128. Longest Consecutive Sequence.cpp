#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1)return nums.size();
        sort(nums.begin(),nums.end());
        int result=1;
        int final=1;
        for(int i =1;i<nums.size();i++){
            if(nums[i]==nums[i-1])continue;
            if(nums[i]==(nums[i-1]+1))result++;
            else result=1;
            final=max(final,result);
        }
        return final;
    }
};