#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
   int operations = 0;

    for (int num : nums) {
        int mod = num % 3;
        if (mod != 0) {
            operations += 1; // Only one operation is needed to make it divisible by 3
        }
    }

    return operations;
    }
};