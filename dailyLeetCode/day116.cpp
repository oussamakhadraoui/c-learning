
 #include <bits/stdc++.h>
 using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            while(nums[i]<=nums.size() && nums[i]>=1 && nums[i]!=i+1){
                if(nums[nums[i]-1]==nums[i])break;
                swap(nums[i], nums[nums[i]-1]);
            }
        }
        int i=1;
        while(i<=n && nums[i-1]==i) i++;
        return i;
    }
};