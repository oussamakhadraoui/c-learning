#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
        sort(enemyEnergies.begin(), enemyEnergies.end());
        if(currentEnergy<enemyEnergies[0])return 0;
        int n = enemyEnergies.size();
        long long ans =0;
        long long sum  = currentEnergy-enemyEnergies[0];
        for(int v:enemyEnergies){
            sum+=v;
        }
        return sum/enemyEnergies[0];
    }
};