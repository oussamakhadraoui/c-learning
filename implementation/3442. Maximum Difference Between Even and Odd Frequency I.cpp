#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
     int maxDifference(std::string s) {
         std::vector<int> counts(26, 0);
         for (char c : s) {
             counts[c - 'a']++;
         }
 
         int maxOdd = 0;
         int minEven = INT_MAX;
 
         for (int count : counts) {
             if (count == 0) {
                 continue;
             }
 
             if (count % 2 == 1) {
                 maxOdd = std::max(maxOdd, count);
             } else {
                 minEven = std::min(minEven, count);
             }
         }
 
         return maxOdd - minEven;
     }
 };