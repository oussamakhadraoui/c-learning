#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
         int p = 0;
        for (int i = 0; i < arr.size(); ++i) {
            int d = arr[i] - p - 1;
            if (d != 0) {
                while (d-- > 0) {
                    k--;
                    p++;
                    if (k == 0) {
                        return p;
                    }
                }
            }
            p = arr[i];
        }
        if (k > 0) {
            return arr.back() + k;
        }
        return 0;
    }
};