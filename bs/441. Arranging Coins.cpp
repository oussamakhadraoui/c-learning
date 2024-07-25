#include <bits/stdc++.h>

using namespace std;
class Solution {
    public int arrangeCoins(int n) {
                int low = 1;
        int high = n;
        while (low <= high) {
            long mid = low + (high - low) / 2;
            if (mid * (mid + 1) / 2 > n) {
                high = (int) mid - 1;
            } else {
                low = (int) mid + 1;
            }
        }
        return high;
    }
}