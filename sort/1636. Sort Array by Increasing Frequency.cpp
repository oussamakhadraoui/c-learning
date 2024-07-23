#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int,int>rec;
        for(int &i:nums)rec[i]++;
        vector<pair<int,int>>track;
        for(auto&[key,val]:rec)track.push_back({key,val});
        sort(track.begin(),track.end(),[](pair<int,int>&a,pair<int,int>&b){
            if(a.second==b.second)return a.first>b.first;
            return a.second<b.second;
        });
        int t=0;
        for(int i =0;i<n;){
            int v=track[t].second;
            while(v--){
                nums[i]=track[t].first;
                i++;
            }
            t++;
        }
        return nums;   
    }
};