#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstCompleteIndex(vector<int>& ar, vector<vector<int>>& m) {
        int rows = m.size(), cols = m[0].size();
        unordered_map<int, pair<int, int>> pos;
        vector<int> rcount(rows, cols), ccount(cols, rows);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                pos[m[i][j]] = {i, j};
            }
        }
        for (int i = 0; i < ar.size(); ++i) {
            int val = ar[i];
            auto [row, col] = pos[val];
            rcount[row]--;
            ccount[col]--;
            if (rcount[row] == 0 || ccount[col] == 0) {
                return i;
            }
        }
        return -1;
    }
};