 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans=INT_MAX;
        for(int i =0;i<nums.size();i++){
            int val=0;
            for(int j=i;j<nums.size();j++){
                val |= nums[j];
                if(val>=k){
                    ans=min(ans,j-i+1);
                }
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};