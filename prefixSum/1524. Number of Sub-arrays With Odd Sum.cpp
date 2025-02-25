#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int mod = 1e9 + 7;
        int even_count = 1, odd_count = 0, sum = 0, result = 0;

        for (int num : arr) {
            sum += num;
            if (sum % 2 == 0) {
                result = (result + odd_count) % mod;
                even_count++;
            } else {
                result = (result + even_count) % mod;
                odd_count++;
            }
        }
        return result;
    }
};
