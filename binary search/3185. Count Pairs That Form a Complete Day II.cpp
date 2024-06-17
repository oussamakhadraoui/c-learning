#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        long long result=0;
        unordered_map<int,vector<int>>track;
        int n= hours.size();
        for(int i =0;i<n;i++){
            hours[i]=hours[i]%24;
            track[hours[i]].push_back(i);
        }
        for(int i =0;i<n;i++){
            int toFind=(24-hours[i])%24;
            if(track[toFind].size()>0){
                 vector<int>::iterator upper1 = upper_bound(track[toFind].begin(), track[toFind].end(), i);
                 result+=(track[toFind].size()-(upper1 - track[toFind].begin()));
            }
        }
        return result;
        
    }
};