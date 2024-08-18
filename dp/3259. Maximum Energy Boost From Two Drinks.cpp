#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxEnergyBoost(vector<int>& energyDrinkA,
                             vector<int>& energyDrinkB) {
        int n = energyDrinkA.size();

        if (n == 1) {
            return max(energyDrinkA[0], energyDrinkB[0]);
        }

        vector<long long> dpa(n, 0);
        vector<long long> dpb(n, 0);

        dpa[0] = energyDrinkA[0];
        dpb[0] = energyDrinkB[0];

        for (int i = 1; i < n; ++i) {

            dpa[i] = dpa[i - 1] + energyDrinkA[i];
            if (i >= 2) {
                dpa[i] = max(dpa[i], dpb[i - 2] + energyDrinkA[i]);
            }
            dpb[i] = dpb[i - 1] + energyDrinkB[i];
            if (i >= 2) {
                dpb[i] = max(dpb[i], dpa[i - 2] + energyDrinkB[i]);
            }
        }

        return max(dpa[n - 1], dpb[n - 1]);
    }
};