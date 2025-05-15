#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
     vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> result1;
        vector<string> result2;
         int n = groups.size();
         int x=0;
        for(int i=0;i<n;i++){
            if(groups[i]==x){
                result1.push_back(words[i]);
                x^=1;
            }
            
            
        }
         x=1;
          for(int i=0;i<n;i++){
            if(groups[i]==x){
                result2.push_back(words[i]);
                x^=1;
            }
        }
         
 
         return result1.size()>result2.size()?result1:result2;
     }
 };