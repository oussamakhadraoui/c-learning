#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n =nums.size();
        int l=0;
        int result=0;
        int curr=0;
        for(int i =0;i<n;i++){
            while(curr&nums[i]){
                curr^=nums[l];
                l++;
            }
            result=max(result,i-l+1);
            curr|=nums[i];
        }
        return result;
    }
};