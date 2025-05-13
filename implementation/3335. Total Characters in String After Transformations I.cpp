#include <bits/stdc++.h>
using namespace std;
class Solution {

 long long MOD = 1e9 + 7;
public:
 int lengthAfterTransformations(string s, int t) {
     vector<int> freq(26);
     vector<int> sizes(t + 26);
     freq[0] = 1;
     sizes[0] = 1;
     for (int i = 1; i < t + 26; ++i) {
         int prev = 0;
         for (int j = 0; j < 26; ++j) {
             swap(prev, freq[j]);
         }
         freq[0] = ((long long) freq[0] + prev) % MOD;
         freq[1] = ((long long) freq[1] + prev) % MOD;
         sizes[i] = ((long long) sizes[i - 1] + prev) % MOD;
     }

     int result = 0;
     for (char c : s) {
         result = ((long long) result + sizes[c - 'a' + t]) % MOD;
     }
     return result;
 }
};