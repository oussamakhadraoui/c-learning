#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        unordered_map<int,int>rec;
        for(int &n:nums)rec[n]++;
        for(int i =0;i<moveFrom.size();i++){
            if(rec[moveFrom[i]]>0){
                rec[moveFrom[i]]=0;
                rec[moveTo[i]]++;
            }
        }
        vector<int>result;
        for(auto&[key,val]:rec){
            if(val>0)result.push_back(key);
        }
        sort(result.begin(),result.end());
        return result;
    }
};