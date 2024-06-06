#include <bits/stdc++.h>
 
using namespace std;
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>result;
        int n= words.size();
        vector<int>occ(26,101);
        for(string &s:words){
            vector<int>occ2(26,0);
            for(char &c:s){
                occ2[c-'a']++;
            }
            for(int i =0;i<26;i++){
                occ[i]=min(occ[i],occ2[i]);
            }
        }
        for(int i =0;i<26;i++){
            if(occ[i]!=0){
                char c=char(97+i);
                string s;
                s.push_back(c);
                while(occ[i]--)result.push_back(s);
            }
        }
        return result;
    }
};