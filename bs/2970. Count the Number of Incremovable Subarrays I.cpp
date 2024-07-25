#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int n= nums.size();
        int result=0;
        for(int i =0;i<n;i++){
            for(int j=i;j<n;j++){
                int prev=INT_MIN;
                int isOk=1;
                for(int k=0;k<n;k++){
                    if(k>=i&&k<=j)continue;
                    if(prev>=nums[k])isOk=0;
                    prev=nums[k];
                }
                if(isOk)result++;
            }
        }
        return result;
    }
};