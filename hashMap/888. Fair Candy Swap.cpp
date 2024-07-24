#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
         int sumAlice = 0;
        int sumBob = 0;
        unordered_map<int, int> aliceMap;
        unordered_map<int, pair<int, int>> bobMap;

        // Calculate sum and populate Alice's map
        for (int &num : aliceSizes) {
            aliceMap[num]++;
            sumAlice += num;
        }

        // Calculate sum and populate Bob's map
        for (int &num : bobSizes) {
            bobMap[num].first++;
            sumBob += num;
        }

        int target = (sumAlice + sumBob) / 2;

        vector<int> result;

        // Iterate through Alice's sizes to find the correct candy swap
        for (int &aliceSize : aliceSizes) {
            int bobSize = target - (sumAlice - aliceSize);
            if (bobMap.find(bobSize) != bobMap.end()) {
                result.push_back(aliceSize);
                result.push_back(bobSize);
                break;  // Found one valid swap, no need to search further
            }
        }

        return result;

    }
};