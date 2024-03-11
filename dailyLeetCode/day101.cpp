 #include <bits/stdc++.h>
 using namespace std;

class Solution {
public:
     int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        int n = nums.size();
        int l =0, r = n-1;
        while(l<r){
            int sum = nums[l] + nums[r];
            if(sum<target){
                cnt += (r-l);
                l++;
            }
            else r--;
        }
        return cnt;
    }
};