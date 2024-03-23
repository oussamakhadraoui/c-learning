#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        long long sum=0;
        int n=nums.size();
        vector<pair<int,int>>order;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            order.push_back({nums[i],i});
        }
        vector<long long> result;
        sort(order.begin(),order.end());
        int tracker=0; //track the progression inside order vector
        for(int i=0;i<queries.size();i++){
            
            int index=queries[i][0];
            int numberOfElementToDelete=queries[i][1];
                sum-=nums[index];
                nums[index]=0;

            while(tracker!=n&&numberOfElementToDelete){
                int indexInsideOrder=order[tracker].second;
                int valueInsideOrder=order[tracker].first;
                if(nums[indexInsideOrder]){
                    sum-=valueInsideOrder;
                    nums[indexInsideOrder]=0;
                    numberOfElementToDelete--;
                }
                tracker++;
            }

            result.push_back(sum);
        }
        return result;
        
    }
};