#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,priority_queue<int>>rec;
        for(int i =0;i<n;i++){
            int clone=nums[i];
            int sum=0;
            while(clone){
                sum+=(clone%10);
                clone/=10;
            }
            rec[sum].push(nums[i]);
        }
        int maxi=-1;
        for(auto&[key,val]:rec){
            int vs=val.size();
            if(vs>1){
                int sum=val.top();
                val.pop();
                sum+=val.top();
                maxi=max(maxi,sum);
            }
        }

        return maxi;
    }
};