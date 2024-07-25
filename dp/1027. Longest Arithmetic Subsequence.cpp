#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size();
        vector<unordered_map<int,int>>dp(n);
        int result=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int diff= nums[i]-nums[j];
                if(dp[j].count(diff)>0) dp[i][diff]=1+dp[j][diff];
                else dp[i][diff]=2;
                result=  max(result,dp[i][diff]); 
            }
        }
        return result;
    }
};

// ok the solution is to track the diff and the presnece of each diff
// so we do a vector of unordered map we iterate from the 0 index to the chosen index element
// and we check if the diff exist we just add 1 if it doesn t exist we just make it 2 coz there is 2 element min