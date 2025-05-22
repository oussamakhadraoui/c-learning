#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
     int maxRemoval(vector<int>& nums, vector<vector<int>>& qs) {
         int n = nums.size();
         sort(qs.begin(), qs.end());
         priority_queue<int> curr;
         priority_queue<int, vector<int>, greater<int>> ass;
         int count = 0;
         int k = 0;
 
         for (int i = 0; i < n; i++) {
             while (!ass.empty() && ass.top() < i) {
                 ass.pop();
             }
             while (k < qs.size() && qs[k][0] <= i) {
                 curr.push(qs[k++][1]);
             }
             while (ass.size() < nums[i] && !curr.empty() && curr.top() >= i) {
                 ass.push(curr.top());
                 curr.pop();
                 count++;
             }
             if (ass.size() < nums[i]) return -1;
         }
         return qs.size() - count;
     }
 };
 