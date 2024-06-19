#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int el = nums[0];
        for(int &num:nums){
            if(el==num)count++;
            else if(el!=num)count--;
            if(count<0){
                el=num;
                count=0;
            }
            
        }
        return el;
    }
};