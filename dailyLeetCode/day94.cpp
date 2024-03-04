#include<bits/stdc++.h>
using namespace std;
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int ans = 0, cur = 0;
        int l = 0, r = tokens.size()-1;
        while(l <= r) {
            if (tokens[l] <= power) {
                cur++;
                power -= tokens[l++];

            } else {
                if(!cur) break;
                power += tokens[r--];
                cur--;
            }
            ans = max(ans, cur);
        }
        return ans;
    }