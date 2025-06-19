#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
     int partitionArray(vector<int>& nums, int k) {
         sort(nums.begin(),nums.end());
         int result=0;
         int n = nums.size();
         int begin=nums[0];
         for(int i=1;i<n;i++){
             if(nums[i]-begin>k){
                 begin=nums[i];
                 result++;
             }
         }
         if(nums[n-1]-begin<=k)result++;
         return result;
     }
 };