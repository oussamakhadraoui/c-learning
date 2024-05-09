#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        int n = happiness.size();
        long long int result=0;
        int miner=0;
        int last=n-k;
        for(int i=n-1;i>=last;i--){
            result+=max(0,happiness[i]-miner);
            miner++;
        }
        return result;
    }
};