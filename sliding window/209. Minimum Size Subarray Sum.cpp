#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i =0,j=0,sum=0,result=INT_MAX;
        while(i<=j&&j<nums.size()){
            sum+=nums[j];
            
            while(sum>=target&&i<=j){
                result=min(result,(j-i+1));
       
                if(result==1)return 1;
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return result==INT_MAX?0:result;
    }
};