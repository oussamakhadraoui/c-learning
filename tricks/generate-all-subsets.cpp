#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        int n= nums.size();
        for(int mask=0;mask<(1<<n);mask++){
            int xorSum =0;
            for(int i=0;i<n;i++){
                if(mask&(1<<i)){
                    // xorSum^=nums[i]; u put the manipulation here
                }
            }
            sum+=xorSum;
        }
        return sum;
    }
};

// in this code you are generating this mask
// 000
// 001
// 010
// 100
// 011
// 110
// 111
// 101
// [9,5,6]
// each time you choose the value indicated by 1
// so u generate all subsets