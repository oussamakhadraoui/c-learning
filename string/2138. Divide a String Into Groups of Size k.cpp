#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
     vector<string> divideString(string s, int k, char fill) {
         vector<string> result;
         int n = s.size();
 
         for (int i = 0; i < n; i += k) {
             string ss = "";
             for (int j = i; j < i + k; j++) {
                 if (j < n) ss += s[j];
                 else ss += fill; 
             }
             result.push_back(ss);
         }
 
         return result;
     }
 };
 