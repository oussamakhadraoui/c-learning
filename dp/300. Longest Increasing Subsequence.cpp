#include <bits/stdc++.h>
using namespace std;

// n*n
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,1);
        for(int i =1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j])dp[i]=max(dp[i],1+dp[j]);
            }
        }
        return *std::max_element(dp.begin(), dp.end());
    }
};

//nlogn
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n =nums.size();
        vector<int>result;
        result.push_back(nums[0]);
        for(int i =0;i<n;i++){
            if(nums[i]>result.back())result.push_back(nums[i]);
            else{
                int index =lower_bound(result.begin(),result.end(),nums[i])-result.begin();
                result[index]=nums[i];
            }
        }
        return result.size();
    }
};