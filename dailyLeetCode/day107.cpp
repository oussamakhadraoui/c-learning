 #include <bits/stdc++.h>
 using namespace std;
     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>result;
        int n = intervals.size();
        int i =0;
        int lastVal=newInterval[1];
        int firstVal=newInterval[0];
        while(i<n&&firstVal>intervals[i][1]){
            result.push_back(intervals[i]);
            i++;
        }
        while(i<n&&intervals[i][0]<=lastVal){
            lastVal=max(lastVal,intervals[i][1]);
            firstVal=min(firstVal,intervals[i][0]);
            i++;
        }
        result.push_back({firstVal,lastVal});
        while(i<n){
            result.push_back(intervals[i]);
            i++; 
        }
        return result;  
    }