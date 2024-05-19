#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        

        int n = nums.size();

        unordered_map<int,unordered_map<char,int>>acc;
        
        for(int j=0;j<n;j++){
            string x=to_string(nums[j]);
            for(int i =0;i<x.size();i++){
                acc[i][x[i]]++;
            }
        }
        int long long result=0;
        for(int j=0;j<n;j++){
            string x=to_string(nums[j]);
            for(int i =0;i<x.size();i++){
                result+=(n-acc[i][x[i]]);
            }
        }
        return result/2;
    }
    
};