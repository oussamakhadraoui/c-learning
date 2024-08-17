#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>result;
        int n =nums.size();
        if(n==1)return nums;
        vector<int>prefix(n,1);
        for(int i =1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                prefix[i]=prefix[i-1]+1;
            }else{
                prefix[i]=1;
            }
        }
        for (int i=0;i<=n -k; i++) {
            if (prefix[i + k - 1] >= k) result.push_back(nums[i+k-1]);
            else result.push_back(-1);
           
        }
        return result;
    }
};