#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        set<vector<int>>seto;
        int n=nums.size();
        for(int i=0;i<n;i++){
            vector<int>v;
            int count=0;
            for(int j=i;j<n;j++){
                v.push_back(nums[j]);
                if(nums[j]%p==0)count++;
                if(count>k)break;
                seto.insert(v);
            }

        }
        return seto.size();
    }
};