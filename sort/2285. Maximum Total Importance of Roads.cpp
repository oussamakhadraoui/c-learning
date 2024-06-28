#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int>rec(n,0);
        for(auto &road:roads){
            rec[road[0]]++;
            rec[road[1]]++;
        }
        sort(rec.begin(),rec.end());
        int k=n;
        long long result=0;
        for(int i =rec.size()-1;i>=0;i--){
            result+=rec[i]*1ll*k;
            k--;
        }
        return result;
    }
};