#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n2 = queries.size();
        int n = nums.size();
        vector<int>badIndex(n,0);
        vector<bool> result(n2,true);
       
        for(int i =1;i<n;i++){
            badIndex[i]=badIndex[i-1];
            if((nums[i]%2==0&&nums[i-1]%2==0)||(nums[i-1]%2==1&&nums[i]%2==1))badIndex[i]++;
        }
        for(int i=0;i<queries.size();i++){
            int first=queries[i][0];
            int second=queries[i][1];
            if((badIndex[first]-badIndex[second])!=0)result[i]=false;
        }
        return result;
    }
};