 #include <bits/stdc++.h>
 using namespace std;
class Solution {
public:
    bool isSubstringPresent(string s) {
        
        unordered_map<string,int>rec;
        int n = s.size();
        if(n==1)return false;
        // string v ="",x="";
        for(int i =0;i<s.size()-1;i++){
            rec[s.substr(i,2)]=1; 
        }
         reverse(s.begin(),s.end());
         for(int i =0;i<s.size()-1;i++){
             if(rec[s.substr(i,2)])return true;
         }
        return false;
    }
};