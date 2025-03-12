#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = n - 1, pos = n; 
        while (i <= j) {
            int mid = (i + j) / 2;
            if (nums[mid] > 0) {
                pos = mid;
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }

        i = 0, j = n - 1;
        int neg = -1;
        while (i <= j) {
            int mid = (i + j) / 2;
            if (nums[mid] < 0) {
                neg = mid;
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }

        int negx = neg + 1;
        int posx = n - pos;

        return max(negx, posx);
    }
};
