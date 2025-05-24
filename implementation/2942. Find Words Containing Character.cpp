#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
     vector<int> findWordsContaining(vector<string>& words, char x) {
         int n =words.size();
         vector<int>result;
         for(int i =0;i<n;i++){
             int m =words[i].size();
             for(int j=0;j<m;j++){
                 if(words[i][j]==x){
                     result.push_back(i);
                     j=m;
                 }
             }
         }
         return result;
     }
 };