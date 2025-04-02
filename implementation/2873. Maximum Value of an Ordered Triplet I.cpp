#include <bits/stdc++.h>
using namespace std;
#define ll long long ;
class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long result=0;
        int n= nums.size();

        for(int i =0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                     long long val = (long long)(nums[i] - nums[j]) * nums[k];
                    result=max(result ,val);
                }
            }
        }
        return result;
    }
};