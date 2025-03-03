#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int>result(n,0);
        int less=0,greater=0,p=0;
        for(int i=0;i<n;i++){
            if(pivot==nums[i])p++;
            else if(pivot>nums[i])less++;
            else greater++;
        }
        int start=0;
        int start2=less;
        int start3=less+p;
        for(int i =0;i<n;i++){
            if(pivot==nums[i])result[start2++]=nums[i];
            else if(pivot>nums[i])result[start++]=nums[i];
            else result[start3++]=nums[i];
        }
        return result;
    }
};