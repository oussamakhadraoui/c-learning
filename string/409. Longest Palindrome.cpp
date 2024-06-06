#include <bits/stdc++.h>
 
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>occ;
        for(char &c :s) occ[c]++; 
        int result=0;
        for(auto& x:occ){
            result += (x.second/2)*2;
        }
        return result==s.size()?result:result+1;
    }
};