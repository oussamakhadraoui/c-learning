#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int countMonotonicPairs(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> dp(n + 1, vector<int>(51, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= nums[i - 1]; ++j) {
            // Transitions:
            // 1. Current element is the same as the previous one
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            // 2. Current element is larger than the previous one
            if (j > 0) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD;
            }
        }
    }

    int ans = 0;
    for (int j = 0; j <= nums[n - 1]; ++j) {
        // For each possible last element in arr1, calculate the number of pairs
        ans = (ans + dp[n][j]) % MOD;
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 3, 2};
    cout << countMonotonicPairs(nums) << endl; // Output: 4
    return 0;
}