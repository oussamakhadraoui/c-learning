#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void backtrack(int i,vector<int>&add,vector<vector<int>>&result, vector<bool>&vis,int n,vector<int>& nums){
        if(add.size()==n){
            result.push_back(add);
            return;
        }
        for(int x =0;x<n;x++){
            if(vis[x])continue;
            add.push_back(nums[x]);
            vis[x]=1;
            backtrack(x,add,result,vis,n,nums);
            add.pop_back();
            vis[x]=0;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>add;
        vector<vector<int>>result;
        int n = nums.size();
        vector<bool>vis(n,0);
        backtrack(0,add,result,vis,n,nums);
        return result;
    }
};