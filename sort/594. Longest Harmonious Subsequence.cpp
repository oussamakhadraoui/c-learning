#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
     int findLHS(vector<int>& nums) {
         sort(nums.begin(),nums.end());
         int j = 0,maxi= 0,n = nums.size();
         for(int i =0;i<n;i++){
             while(nums[i]-nums[j]>1)j++;
             if(nums[i]-nums[j]==1){
                 maxi= max(maxi,i-j+1);
             }
         }
         return maxi;
     }
 };