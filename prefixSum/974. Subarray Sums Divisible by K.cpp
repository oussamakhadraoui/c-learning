#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n =nums.size();
        unordered_map<int,int>rec;
        int sum=0;
        rec[0]=1;
        int result=0;
        for(int i =0;i<n;i++){
            sum=(sum+nums[i]%k+k)%k;
            if(rec[sum])result+=rec[sum];
            rec[sum]++;
        }
        return result;
    }
};