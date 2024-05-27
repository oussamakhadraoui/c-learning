class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i =n-1;i>=0;i--){
            if(count<=nums[i]){
                count++;
                if(count>nums[i])return -1;
            }else{
                return count;
            }
        }
        return n;
    }
};