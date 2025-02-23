#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()>2){
            string res="";
            for(int i =1;i<s.size();i++){
                int x=((s[i]-'0')+(s[i-1]-'0'))%10;
                res+=to_string(x);  
            }
            s=res;
        }
        return s[0]==s[1];
    }
};