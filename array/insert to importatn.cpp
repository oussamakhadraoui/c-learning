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


    /////second solution
    class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>result;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        result.push_back(intervals[0]);
        for(int i =1;i<intervals.size();i++){
            int firstVal=result[result.size()-1][0];
            int lastVal=result[result.size()-1][1];
            if(intervals[i][0]>lastVal){
                result.push_back(intervals[i]);
            }else{
                result.pop_back();
                lastVal=max(lastVal,intervals[i][1]);
                result.push_back({firstVal,lastVal});
            }
        }
        return result;
        
    }
};