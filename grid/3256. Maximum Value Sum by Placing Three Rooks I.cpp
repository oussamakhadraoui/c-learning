#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumValueSum(vector<vector<int>>& board) {
        int n =board.size();
        int m =board[0].size();
        vector<pair<int, pair<int, int>>> rec;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <m;j++) {
                rec.push_back({board[i][j],{i,j}});
            }
        }
        sort(rec.begin(), rec.end(), greater<pair<int, pair<int, int>>>());
        
        int limit=min(15,(int)rec.size());
        long long result=LLONG_MIN;
        for(int i =0;i<limit;i++){
            for(int j=0;j<limit;j++){
                for(int k=0;k<limit;k++){
                    long long x=rec[i].second.first;
                    long long y=rec[i].second.second;
                    long long x1=rec[j].second.first;
                    long long y1=rec[j].second.second;
                    long long x2=rec[k].second.first;
                    long long y2=rec[k].second.second;
                    if(x==x1||x==x2||x1==x2||y==y1||y==y2||y1==y2)continue;
                    long long r=(long long)rec[i].first+(long long)rec[j].first+(long long)rec[k].first;
                    result=max(result,r);
                }
            }
        }
        return result;
    }
};