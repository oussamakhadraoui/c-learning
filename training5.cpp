#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int result=1;
        int maxi=0;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]-1){
                result++;
                maxi=max(maxi,result);
            }
            else result=1;
            if(nums[i]==nums[i+2]){
                result++;
                maxi=max(maxi,result);
            }
            else result=1;
        }
        return maxi;
    }
};
int main(){
    vector<int>grid={2,3,4,3,4};
    Solution().alternatingSubarray(grid);

    return 0;
}