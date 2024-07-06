#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int n;
    vector<int>d{1,7,30};
    int dp[366];
    int rec(vector<int>& days, vector<int>& costs,int i){
        if(i>=n)return 0;
        if(dp[i]!= -1) return dp[i];
        dp[i]=1e6;

        for(int k=0;k<3;k++){
            int j =i;
            while(j<n&&days[j]<days[i]+d[k])j++;
            dp[i]=min(dp[i],costs[k]+rec(days,costs,j));
        }
       
        return dp[i];
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        memset(dp,-1,sizeof(dp));
        this->n=days.size();
        return rec(days,costs,0);
    }
};