#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int duplicate=0;
        for(int i =0;i<32;i++){
             int mask= 1<<i;
            int count1=0,count2=0;
            for(int j=0;j<n;j++){
                count1+=(nums[j]&mask)>0;
                count2+=(j&mask)>0;
            }
            if(count1>count2)duplicate|=mask;
         }
        return duplicate;
    }
};


//bit tricks ok this is so amazing nlog(n) solution
//we supose we have this array [1 2 3 4 5 6] and this array [1 2 3 3 4 3] so the duplicate is 2
// the trick is to count the bit in each mask 001 first bit count all the bits in the first bit
// we supose we end up with those 2 arrays [0,4,5] [1,2,2] we subtruct [-1 2 3] so the duplicate is
// [0 1 1]  which is 3 (if it s positive receive 1 if it s negative receive 0)