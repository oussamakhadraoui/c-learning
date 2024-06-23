#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n= nums.size();
        int result=0;
        for(int i =0;i<n-2;i++){
            if(nums[i]==0){
                nums[i]^=1;
                nums[i+1]^=1;
                nums[i+2]^=1;
                result++;
            }
        }
        int isOne=1;
        for(int& num:nums){
            isOne&=num;
        }
        return isOne==1?result:-1;
    }
};