#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int last=1,result=0;
        int n = meetings.size();
        for(int i =0;i<n;i++){
            int start=meetings[i][0];
            int end= meetings[i][1];
            if(last<start){
                result+=(i==0)?start-last:start-last-1;
            }
            last=max(last,end);
        }
        result+=days-last;
        return result;
    }
};