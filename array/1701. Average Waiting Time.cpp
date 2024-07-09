#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long sumTime=0;
        int startTime=customers[0][0];
        for(auto &custo:customers){
            int start=custo[0];
            int duration=custo[1];
            if(startTime<start){
                sumTime+=(duration);
                startTime=start+duration;
            }else{
                startTime+=duration;
                sumTime+=(startTime-start);
                
            }
        }
        return (double)sumTime/customers.size();
    }
};