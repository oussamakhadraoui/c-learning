#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n= names.size();
        vector<pair<int,string>>track;
        
        for(int i =0;i<n;i++)track.push_back({heights[i],names[i]});
       
        sort(track.begin(),track.end(),greater());
        
        for(int i =0;i<n;i++)names[i]=track[i].second;
        
        return names;
    }
};