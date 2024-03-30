 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long result=0;
        for(char ch:s){
          if(ch==c)result++;
      }  
        return result*(1+result)/2;
    }
};