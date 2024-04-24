 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    vector<int>dp=vector<int>(38,0);
    int tribonacci(int n) {
        if(n==0)return 0;
        if(n==1||n==2)return 1;
        if(dp[n]!=0)return dp[n];
        return dp[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    }
};