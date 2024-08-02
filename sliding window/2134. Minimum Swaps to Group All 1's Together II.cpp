#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int ones= 0;
        for(int&num:nums)ones+=num;
        int n = nums.size();
        if(ones==0||ones==n)return 0;
        int curOnes=0;
        int l=0;
        int w=0;
        int result=ones;
        for(int i =0;i<2*n;i++){
            w++;
            curOnes+=nums[i%n];
            if(w>ones){
                curOnes-=nums[l%n];
                l++;
                w--;
            }
            result=min(result,ones-curOnes);
        }
        return result;
    }
};