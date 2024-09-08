#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPlaceIntegers(vector<int>& start, int d, int x) {
        int n = start.size();
        long long last = start[0];  
        for (int i = 1; i < n; ++i) {
            long long next = last + x;
            if (next > start[i] + d) {
                return false;
            }
            last = max(1ll*start[i], next);
        }
        
        return true;
    }
    int maxPossibleScore(vector<int>& start, int d) {
        sort(start.begin(), start.end());
        int l = 0, r = start.back() + d - start[0];
        int result = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (canPlaceIntegers(start, d, mid)) {
                result = mid;  
                l = mid + 1;
            } else {
                r = mid - 1;  
            }
        }
        return result;
    }
};