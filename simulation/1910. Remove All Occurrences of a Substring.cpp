#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.size();
        int ps = part.size();
        string res="";
        for(int i =0;i<n;i++){
            res+=s[i];
            if(res.size()<ps)continue;
            bool isOk=true;
            while(res.size()>=ps&&isOk){
                int c=0;
                for(int j=res.size()-ps;j<res.size();j++){
                    if(res[j]!=part[c]){
                        isOk=false;
                        break;
                    }
                    c++;
                }
                if(isOk){
                    int count=ps;
                    while(count--)res.pop_back();
                }
            }
            
        }
        return res;
    }
};