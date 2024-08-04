#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxNonOverlapping(std::vector<int>& nums, int target) {
        int count = 0;
        int current_sum = 0;
        int last_end = -1;
        std::unordered_map<int, int> prefix_sum_map;
        prefix_sum_map[0] = -1;

        for (int i = 0; i < nums.size(); ++i) {
            current_sum += nums[i];
            if (prefix_sum_map.find(current_sum - target) != prefix_sum_map.end()) {
                int prev_index = prefix_sum_map[current_sum - target];
                if (prev_index >= last_end) {
                    ++count;
                    last_end = i;
                    current_sum = 0;
                }
            }
            prefix_sum_map[current_sum] = i;
        }

        return count;
    }
};