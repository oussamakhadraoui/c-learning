#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int result=0;
        int n=nums.size();
        for(int i =0;i<n;i++){
            int sum=1, k=1;
            for(int j=i+1;j<n;j++){
                if(nums[j]-nums[j-1]==k){
                    sum++;
                }else{
                    break;
                }
                k*=(-1);
            }
            result=max(sum,result);
        }
        if(result==1)return -1;
        return result;
    }
};