#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n= arr.size();
        vector<int>prefix(n);
        prefix[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            prefix[i]=prefix[i-1]^arr[i];
           
        }
        vector<int>result;
        for(int i =0;i<queries.size();i++){
            int left=queries[i][0];
            int right=queries[i][1];
            if(!left)result.push_back(prefix[right]);
            else result.push_back(prefix[right]^prefix[left-1]);
        }
        return result;
    }
};