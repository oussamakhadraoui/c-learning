#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
     int longestPalindrome(vector<string>& words) {
         unordered_map<string, int> rec;
         for (const string& word : words) {
             rec[word]++;
         }
 
         int result = 0;
         bool centerUsed = false;
         for (auto& [key, val] : rec) {
             string rev = key;
             swap(rev[0], rev[1]);
             if (key != rev && rec.count(rev)) {
                 int cc = min(rec[key], rec[rev]);
                 result += cc * 4;
                 rec[key] -= cc;
                 rec[rev] -= cc;
             }
         }
         for (auto& [key, val] : rec) {
             if (key[0] == key[1]) {
                 int cc = val / 2;
                 result += cc * 4;
                 rec[key] -= cc * 2;
                 if (!centerUsed && rec[key] > 0) {
                     result += 2;
                     centerUsed = true;
                 }
             }
         }
         return result;
     }
 };
 