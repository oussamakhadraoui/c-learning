#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>>rec;
        int n = nums1.size();
        for (int i=0;i<n;i++){
            rec.push_back({nums2[i],i});
        }
        sort(rec.begin(),rec.end(),[&](pair<int,int>&i,pair<int,int>&j){
            return i.first>j.first;
        });
        priority_queue <int, vector<int>, greater<int>>pq;
        long long int result=0;
        long long int stack=0;
        for(int i=0;i<n;i++){
            pq.push(nums1[rec[i].second]);
            stack+=nums1[rec[i].second];
            if(pq.size()>k){
                stack-=pq.top();
                pq.pop();
            }
            if(pq.size()==k){
                result=max<long long int>(result,stack*rec[i].first);
            }
        }
        return result;
            
    }
};