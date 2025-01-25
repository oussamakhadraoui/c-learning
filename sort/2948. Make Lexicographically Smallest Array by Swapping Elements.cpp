#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<pair<int, int>> arr;
        for (int i = 0; i < nums.size(); i++)
            arr.push_back({nums[i], i});
        sort(arr.begin(), arr.end());
        vector<vector<int>> groups({{arr[0].second}});
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i].first - arr[i - 1].first <= limit) {
                groups.back().push_back(arr[i].second);
            } else
                groups.push_back({arr[i].second});
        }

        for (auto& group : groups) {
            vector<int> sorted;
            for (int i : group)
                sorted.push_back(nums[i]);
            sort(sorted.begin(), sorted.end());
            sort(group.begin(), group.end());
            for (int i = 0; i < group.size(); i++) {
                nums[group[i]] = sorted[i];
       
            }
        }
        return nums;
    }
};