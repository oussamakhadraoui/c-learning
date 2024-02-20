 #include <bits/stdc++.h>
 #include <vector>
 using namespace std;
 int missingNumber(vector<int>& nums) {

        sort(nums.begin(),nums.end());
          if(nums[0]!=0){
            return 0;
        }
        int x = nums.size();
        int ans ;
        for(int i =0 ;i<x-1;i++){
          if(nums[i]!=nums[i+1]-1){
            ans=nums[i]+1;
            break;
          }else{
            ans=nums[x-1]+1;
          }
        }
        return ans;
    }