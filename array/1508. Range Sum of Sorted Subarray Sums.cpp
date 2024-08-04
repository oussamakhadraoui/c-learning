#include <bits/stdc++.h>
using namespace std;
const int N=1e9+7;
class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>numbers;
        for(int i =0;i<n;i++){
            int v=0;
            for(int j=i;j<n;j++){
                v+=nums[j];
                numbers.push_back(v);
            }
        }
        sort(numbers.begin(),numbers.end());
        int result=0;
        for(int i =left-1;i<=right-1;i++){
            result+=numbers[i];
            result=result%N;
        }
        return result;
        
    }
};