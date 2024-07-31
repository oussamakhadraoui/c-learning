    #include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[100000][2];
    int rec(int i, int b, string &s) {
        if (i==s.size()) return 0;

        int &ans = dp[i][b];
        if (ans != -1)
            return ans;

        ans = 0;

        if (b) {
            if (s[i] == 'a')
                ans = 1 + rec(i+1, 1, s);
            else
                ans = rec(i+1, 1, s);
        } else {
            if (s[i] == 'a')
                ans = rec(i+1, 0, s);
            else
                ans = min(1+rec(i+1, 0, s), rec(i+1, 1, s)); 
        }

        return ans;
    }

    int minimumDeletions(string s) {
        memset(dp, -1, sizeof dp);
        return rec(0, 0, s);
    }
};