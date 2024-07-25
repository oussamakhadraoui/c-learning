#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int longestSubsequence(vector<int>& arr, int diff) {
        unordered_map<int,int>rec;
        int result=0;
        for(int &ar:arr){
            rec[ar]=rec[ar-diff]+1;
            result=max(result,rec[ar]);
        }
        return result;
    }
};