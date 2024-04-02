 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> indexS(127, 0); 
        vector<int> indexT(127, 0);
        int len = s.length();
        for(int i = 0; i < len; i++) {
            if(indexS[s[i]] != indexT[t[i]]) { 
                return false; 
            }
            
            indexS[s[i]] = i + 1; 
            indexT[t[i]] = i + 1;
        }
        
        return true; 
    }
};


// or
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>rec;
        unordered_map<char,char>rec2;
        for(int i=0;i<s.size();i++){ 
            if(rec[s[i]]){
                if(rec[s[i]]!=t[i])return false;
            }else{
                 rec[s[i]]=t[i];
            }
            if(rec2[t[i]]){
                if(rec2[t[i]]!=s[i])return false;
            }else{
                 rec2[t[i]]=s[i];
            }
           
        }
        return true;
    }
};