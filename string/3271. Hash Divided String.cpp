#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    string stringHash(string s, int k) {
        vector<int>result;
        int n = s.size();
   
        for(int i =0;i<s.size();i+=k){
            int sum=0;
            for(int j=i; j<i + k && j < n;j++){
                sum+=s[j]-'a';
            }
            
            result.push_back(sum%26);
        }
        string res="";
        for(int i =0;i<result.size();i++){
             char c = 'a' + result[i];
             res+=c;
        }
        return res;
    }
};