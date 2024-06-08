#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>sum(n);
        sum[0]=nums[0];
        for(int i =1;i<n;i++){
            if(nums[i]==0&&nums[i-1]==0)return true;
            sum[i]=sum[i-1]+nums[i];
            if(sum[i]%k==0)return true;
            int j=0;
            int clone=sum[i];
            while((i-j)>=2 && clone>k){
                clone-=nums[j];
                if(clone%k==0)return true;
                j++;
            }
        }
        
        return false;
    }
};