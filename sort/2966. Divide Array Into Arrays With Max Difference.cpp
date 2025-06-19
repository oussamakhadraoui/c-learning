#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
     vector<vector<int>> divideArray(vector<int>& nums, int k) {
         sort(nums.begin(),nums.end());
         vector<vector<int>>result;
         int n= nums.size();
         int begin=nums[0];
             for (int i = 0; i < n; i += 3) {
                 if (nums[i + 2] - nums[i] <= k) {
                     result.push_back({nums[i], nums[i + 1], nums[i + 2]});
             } else {
                 return {};
             }
         }
         return result;
     }
 };
 