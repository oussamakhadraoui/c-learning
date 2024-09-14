#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        int n =height.size();
        vector<int>result;
        for(int i =0;i<n-1;i++){
            if(height[i]>threshold)result.push_back(i+1);
        }
        return result;
    }
};