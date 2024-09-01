 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        priority_queue<int>pq;
        vector<int>result;
        for(auto &q:queries){
            int sum=abs(q[0]) +abs(q[1]);
            pq.push(sum);
            if(pq.size()<k){
                result.push_back(-1);
                continue;
            }
            while(pq.size()>k){
                pq.pop();
            }
            result.push_back(pq.top());
        }
        return result;
    }
};