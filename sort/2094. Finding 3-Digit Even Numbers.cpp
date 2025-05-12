#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& d) {
        set<int> resultSet;
        int n = d.size();

        for (int i = 0; i < n; i++) {
            if (d[i] == 0) continue;
            for (int j = 0; j < n; j++) {
                if (j == i) continue;
                for (int k = 0; k < n; k++) {
                    if (k == i || k == j) continue;
                    if (d[k] % 2 != 0) continue;
                    int num = d[i] * 100 + d[j] * 10 + d[k];
                    resultSet.insert(num);
                }
            }
        }

        return vector<int>(resultSet.begin(), resultSet.end());
    }
};
