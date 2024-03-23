#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minimizeStringValue(string s) {   
        unordered_map<char,int>rec;
        for(char c:s){
            if(c!='?')rec[c]++;
        }
        string ss="abcdefghijklmnopqrstuvwxyz";
        vector<char> result;
        for(char c:s){
            if(c=='?'){
                int mini=INT_MAX;
                bool done=false;
                for(int i =0;i<26;i++){
                    mini=min(mini,rec[ss[i]]);
                    if(!rec[ss[i]]){
                        rec[ss[i]]++;
                        result.push_back(ss[i]);
                        done=true;
                        i=50;
                    }  
                }
                if(!done){
                     for(int i =0;i<26;i++){
                       if(rec[ss[i]]==mini){
                           result.push_back(ss[i]);
                           rec[ss[i]]++;
                           i=50;
                       }  
                     }
                }
            }
        }
        sort(result.begin(),result.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'){
                s[i]=result[j];
                j++;   
            }
        }
        return s;
    } 
};