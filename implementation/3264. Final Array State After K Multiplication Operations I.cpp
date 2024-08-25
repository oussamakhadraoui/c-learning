#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        while(k--){
            int mini =INT_MAX;
            int index=-1;
            for(int i =0;i<nums.size();i++){
                if(nums[i]<mini){
                    mini=nums[i];
                    index=i;
                }
            }
            nums[index]*=multiplier;

        }
        return nums;
    }
};