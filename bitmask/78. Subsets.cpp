#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n =nums.size();
        vector<vector<int>>result;
        for(int mask =0;mask<(1<<n);mask++){
            vector<int>add;
            for(int i =0;i<n;i++){
                if(mask&(1<<i)){
                    add.push_back(nums[i]);
                }
            }
            result.push_back(add);
        }
        return result;
    }
};