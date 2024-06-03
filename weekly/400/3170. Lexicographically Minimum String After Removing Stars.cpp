#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    string clearStars(string s) {
        int n =s.size();
        vector<int>bad(n,-1);
        vector<vector<int>>occ(26);
        for(int i =0;i<n;i++){
            if(s[i]=='*'){
                for(int x=0;x<26;x++){
                    if(occ[x].size()!=0){
                        
                        bad[occ[x].back()]=1;
                        occ[x].pop_back();
                        break;
                    }
                }
            }else{
                occ[s[i]-'a'].push_back(i);
            }
        }
        string result="";
        for(int i=0;i<n;i++){
            if(bad[i]==1||s[i]=='*')continue;
            result+=s[i];
        }
        return result;
    }
};