#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
            vector<pair<int,int>>couple;
            int n = profit.size();
            for(int i =0;i<n;i++){
                couple.push_back({difficulty[i],profit[i]});    
            }
            sort(couple.begin(),couple.end());
            int result=0;
            sort(worker.begin(),worker.end());
            int i =0;
            int maxi=0;
            for(int& w:worker){
                while(i<n&&couple[i].first<=w){
                    maxi=max(maxi,couple[i].second);
                    i++;
                }
                result+=maxi;
            }
        return result;
    }
};
//prefix max