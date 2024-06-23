#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        double result=51;
        int t=n/2;
        int i =0;
        int j=n-1;
        while(t--){
            result=min(result,(double)(nums[i]+nums[j])/2);
            i++;
            j--;
        }
        return result;
    }
};