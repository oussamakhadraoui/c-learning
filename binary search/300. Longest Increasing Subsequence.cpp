#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>len;
        len.push_back(nums[0]);
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==len.back())continue;
            if(nums[i]>len.back())len.push_back(nums[i]);
            else{
                vector<int>::iterator upper =lower_bound(len.begin(),len.end(),nums[i]);
                int index =upper - len.begin();
                len[index]=nums[i];
            }
        }
        return len.size();
    }
};