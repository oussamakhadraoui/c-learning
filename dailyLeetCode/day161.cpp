#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        vector<pair<double,int>>paidPer1Quality;
        int n = wage.size();
        for(int i =0;i<n;i++){
            paidPer1Quality.push_back({(double)wage[i]/quality[i],quality[i]});
        }
        sort(paidPer1Quality.begin(),paidPer1Quality.end());
        double result=DBL_MAX,currentSum=0;
        priority_queue<int>pq;
        for(auto & payers:paidPer1Quality){
            int quality= payers.second;
            double ratio = payers.first;
            currentSum+=quality;
            pq.push(quality);
            if(pq.size()>k){
                currentSum-=pq.top();
                pq.pop();
            }
            if(pq.size()==k){
                result=min(result,currentSum*ratio);
            }
            
        }
        return result;
    }
};