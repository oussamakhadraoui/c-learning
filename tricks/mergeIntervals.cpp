#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>result;
        sort(intervals.begin(),intervals.end());
        for(auto& inter:intervals){
            if(result.size()==0||result.back()[1]<inter[0]){
                result.push_back(inter);
            }else{
                int maxi=max(result.back()[1],inter[1]);
                int begin=result.back()[0];
                result.pop_back();
                result.push_back({begin,maxi});
            }
        }
        return result;
    }
};