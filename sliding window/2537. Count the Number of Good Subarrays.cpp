#include <bits/stdc++.h>
 
using namespace std;
class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long result = 0;
        unordered_map <int,int> rec;
        int left = 0;
        for (int i = 0 ; i < nums.size() ; i++) {
            k -= rec[nums[i]];
            rec[nums[i]]++;
            while (k <= 0){
                k += --rec[nums[left]];
                left++;
            };
            result += left;
        }
        return result;
    }
};