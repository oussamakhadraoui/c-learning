#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        priority_queue<int, vector<int>, greater<int>> pq;
        int n = arr.size();
        int pos = lower_bound(arr.begin(), arr.end(), x)-arr.begin();
        int i = pos-1 , j = pos;
        int count = 0;
        while(i >= 0 && j < n && pq.size() < k) {
            int diff1 = abs(arr[i]-x);
            int diff2 = abs(arr[j]-x);
            if(diff1 <= diff2) pq.push(arr[i--]);
            else pq.push(arr[j++]);
        }
        while(i >= 0 && pq.size() < k) {
            pq.push(arr[i--]);
        }
        while(j < n && pq.size() < k) {
            pq.push(arr[j++]);
        }
        while (!pq.empty()) {
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};
