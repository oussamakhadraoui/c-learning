#include <bits/stdc++.h>
 
using namespace std;
class Solution {
public:
    int appendCharacters(string s, string t) {
        int followT =0;
        int n=s.size();
        for(int i =0;i<n;i++){
            if(s[i]==t[followT])followT++;
        }
        return t.size()-followT;
    }
};