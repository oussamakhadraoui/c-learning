#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int x(string s){
        int i=0,j=0,n=s.size();
        unordered_map<char,int>rec;
        int result=0;
        while(j<n){
            rec[s[j]]++;
            while(rec.size()>2){
                result+=(n-j);
                rec[s[i]]--;
                if(rec[s[i]]==0)rec.erase(s[i]);
                i++;
            }
            j++;
        }
        return result;
    }
    int numberOfSubstrings(string s) {
        return x(s);
    }
};