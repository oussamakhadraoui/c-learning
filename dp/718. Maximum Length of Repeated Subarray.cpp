#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int dp[1001][1001];
        memset(dp,0,sizeof(dp));
        int n=nums1.size();
        int n2=nums2.size();
        int result=0;
        for(int i =n-1;i>=0;i--){
            for(int j =n2-1;j>=0;j--){
                if(nums1[i]==nums2[j])
                    result=max(result,dp[i][j]=1+dp[i+1][j+1]);
            }
        }
        return result;
    }
};