 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        int result=0;
        vector<unordered_map<int,int>>rec(n);
         for (const auto& p : pick) {
            int player = p[0];
            int color = p[1];
            rec[player][color]++;
        }

        for(int i =0;i<n;i++){
            for (const auto& pair : rec[i]) {
                if (pair.second > i ) {
                    result++;
                    break; 
                }
            }
        }
        return result;
       
    }
};