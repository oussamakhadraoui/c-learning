#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n= nums.size();
        vector<vector<int>>rec;
        
        for(int i =0;i<n;i++){
            string s=to_string(nums[i]);
            string res="";
            for(char &c:s){
                res+=to_string(mapping[c-'0']);
            }
            int r=stoi(res);
            rec.push_back({r,nums[i],i});
        }
        sort(rec.begin(), rec.end(), [](const vector<int>& a, const vector<int>& b) {
            if(a[0] == b[0])return a[2]<b[2];
            return a[0] < b[0];
        });
        for(int i =0;i<n;i++){
            nums[i]=rec[i][1];
        }
        return nums;
    }
};