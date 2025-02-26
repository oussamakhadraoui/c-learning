#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int mini=0;
        int maxi=0;
        int n= nums.size();
        int sum=0;
        for(int num:nums){
            sum+=num;
            mini=min(mini,sum);
            maxi=max(maxi,sum);
        }
        return abs(maxi-mini);
    }
};