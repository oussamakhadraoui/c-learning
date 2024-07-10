#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int size=nums.size();
        while(size!=1){
            for(int i=0;i<nums.size()-1;i++){
                nums[i]=(nums[i]+nums[i+1])%10;
                if(i==nums.size()-2){
                    nums.erase(nums.begin()+i+1,nums.begin()+i+2);
                }
                
            }
            size--;
        }
        return nums[0];
    }
};
class Solution {
public:
    int triangularSum(vector<int>& nums) {
        queue<int>rec;
        for(int &num:nums)rec.push(num);
        int time=nums.size()-1;
        int counter=0;
        while(rec.size()>1){
            int c=time-counter;
            while(c--){
                int sum=rec.front();
                rec.pop();
                sum+=rec.front();
                rec.push(sum%10);  
            }
            rec.pop();
            counter++;
        }
        return rec.front();
    }
};