#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
     char getNextChar(char c) {
         if (c >= 'a' && c <= 'z') {
             return (c == 'z') ? 'a' : c + 1;
         }
         return c;
     }
     char kthCharacter(int k) {
         string s = "a";
         while(s.size()<k){
             string dd="";
             int n = s.size();
             for(int i =0;i<n;i++){
                 dd+=getNextChar(s[i]);
             }
             s+=dd;
         }
         return s[k-1];
     }
 };