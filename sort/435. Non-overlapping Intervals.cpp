#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int result=0;
        sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });
        
        int compare=intervals[0][1];
        for(int i =1;i<n;i++){
            if(compare>intervals[i][0])result++;
            else compare=intervals[i][1];
        }
        return result;
    }
};