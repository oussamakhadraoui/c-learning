
 #include <bits/stdc++.h>
 using namespace std;
 const int N=1e5+1;
class Solution {
public:
    int dp[N][2][3];
    int rec(int t,int start,int count,vector<int>& r){
        if(start==r.size())return 0;
        if(count==3)return 1;
        if(dp[start][t][count]!=-1)return dp[start][t][count];
        int result=0;
        for(int i =start+1;i<r.size();i++){
            if(t&&r[start]>r[i])result+=rec(1,i,count+1,r);
            if(!t&&r[start]<r[i])result+=rec(0,i,count+1,r);
        }
        return dp[start][t][count]=result;
    }
    int numTeams(vector<int>& r) {
        int n =r.size();
        memset(dp,-1,sizeof(dp));
        int result=0;
        for(int i=0;i<n;i++){
            result+=rec(1,i,1,r);
            result+=rec(0,i,1,r);
        }
        return result;
    }
};