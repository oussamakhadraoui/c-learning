#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<vector<int>>result;
        for(int mask=0;mask<(1<<n);mask++){
            vector<int>add;
            for(int i =0;i<n;i++){
                if(mask&(1<<i))add.push_back(nums[i]);
            }
            result.insert(add);
        }
        vector<vector<int>>ans;
        for(auto &x:result){
            ans.push_back(x);
        }
        return ans;
    }
};