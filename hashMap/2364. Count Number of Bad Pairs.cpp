#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        long long countGoodp=0;
        unordered_map<long long,long long>rec;
        for(int i =0;i<n;i++){
            rec[nums[i]-i]++;
           
        }
        for(auto[key,val]:rec){
            countGoodp+=val*(val-1)/2;
        }
        long long res= n*(n-1)/2;
        return res-countGoodp;
    }
};