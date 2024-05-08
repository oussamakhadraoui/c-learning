#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int> clone(n);
        vector<string> result(n);
        
        for(int i = 0; i < n; i++)
            clone[i] = i;
        
        sort(clone.begin(), clone.end(), [&](int i, int j) {
            return score[i] > score[j];
        });
        
        for(int i = 0; i < n; i++) {
            if(i == 0) result[clone[i]] = "Gold Medal";
            else if(i == 1) result[clone[i]] = "Silver Medal";
            else if(i == 2) result[clone[i]] = "Bronze Medal";
            else result[clone[i]] = to_string(i + 1);
        }
        
        return result;
    }
};