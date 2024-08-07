#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>rec;
        vector<int>result;
        for(int i =0;i<nums.size();i++){
            if(rec[nums[i]])return {i,rec[nums[i]]-1};
            rec[target-nums[i]]=i+1;
        }
        return result;
    }
};