#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  long long maximumValueSum(vector<vector<int>>& board) {
    auto U = board, D = board;
    int n = board.size(), m = board[0].size();
    for (int i = 1; i < n; i ++)
      for (int j = 0; j < m; j ++)
        U[i][j] = max(U[i][j], U[i - 1][j]);
    for (int i = n - 2; i >= 0; i --)
      for (int j = 0; j < m; j ++)
        D[i][j] = max(D[i][j], D[i + 1][j]);
    auto max3 = [&] (vector<int> &v) {
      vector<pair<int, int>> res(3, {1e9 + 10, -1});
      for (int i = 0; i < m; i ++) {
        pair<int, int> p{- v[i], i};
        res.insert(lower_bound(res.begin(), res.end(), p), p);
        res.pop_back();
      }
      return res;
    };
    long long ans = -1e18;
    for (int i = 1; i < n - 1; i ++) {
      auto A = max3(board[i]), B = max3(U[i - 1]), C = max3(D[i + 1]);
      for (auto [a1, b1]: A)
        for (auto [a2, b2]: B) if (b1 != b2)
          for (auto [a3, b3]: C) if (b3 != b1 && b3 != b2)
            ans = max(ans, 0ll - a1 - a2 - a3);
    }
    return ans;
  }
};
/////////////////////////////
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
        
        int limit=min(400,(int)rec.size());
        long long result=LLONG_MIN;
        for(int i =0;i<limit;i++){
            for(int j=i+1;j<limit;j++){
                for(int k=j+1;k<limit;k++){
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