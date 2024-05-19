#include <bits/stdc++.h>
using namespace std;


long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long sum=0;
        vector<int> pq;
        for(auto &u:nums){
            sum+=u;
            pq.push_back((u^k)-u);
        }
        sort(pq.begin(),pq.end());
        int p;
        while(pq.size()>=2){
            p=pq.back();
            pq.pop_back();
            long long x = p;
            p = pq.back();
            pq.pop_back();
            x += p;
            sum+=max(0ll, x);
        }
        return sum;
    }