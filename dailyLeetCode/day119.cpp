 #include <bits/stdc++.h>
 using namespace std;
class Solution {
public:
    vector<int> nums;
    int n;
    int rec(int k) {
        int i =0,j=0;
        unordered_map<int,int>occ;
        int result=0;
        while(j<n){
            occ[nums[j]]++;
            while(occ.size()>k&&i<=j){
                occ[nums[i]]--;
                if(occ[nums[i]]==0)occ.erase(nums[i]);
                i++;
            }
            result+=(j-i+1);
            j++;
        }
        return result;
    }
      int subarraysWithKDistinct(vector<int>& nums, int k) {
            this->n=nums.size();
            this->nums=nums;
            return rec(k)-rec(k-1);
      }
};