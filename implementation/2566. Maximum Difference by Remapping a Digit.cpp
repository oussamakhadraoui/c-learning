#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
     int minMaxDifference(int num) {
         string s = to_string(num);
         string s_max = s;
         char x = 'x';
         for (int i = 0; i < s_max.size(); i++) {
             if (x == 'x' && s_max[i] != '9') {
                 x = s_max[i];
             }
             if (s_max[i] == x) {
                 s_max[i] = '9';
             }
         }
          string s_min = s;
         char y = 'x';
         for (int i = 0; i < s_min.size(); i++) {
             if (y == 'x' && s_min[i] != '0') {
                 y = s_min[i];
             }
             if (s_min[i] == y) {
                 s_min[i] = '0';
             }
         }
 
         int max_val = stoi(s_max);
         int min_val = stoi(s_min);
 
         return max_val - min_val;  
     }
 };