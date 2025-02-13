#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq(nums.begin(), nums.end());
        int result = 0;
        
        while (pq.top() < k) {
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();
            
            long long sum = x*2+y;
            pq.push(sum);
            result++;
        }
        
        return result;
    }
};