#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>numos;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                numos.push_back(sum);
            }
        }
        sort(numos.begin(),numos.end());
        int result=0;
        for(int i =left-1;i<right;i++){
            result=(result+numos[i])%MOD;
        }
        return result;
    }
};