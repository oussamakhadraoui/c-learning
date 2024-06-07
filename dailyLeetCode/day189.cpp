#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string>rec;
        for(string& s:dictionary)rec.insert(s);
        vector<string>result;
        string follow="";
        int n =sentence.size();
        for(int i=0;i<n;i++){
            char c=sentence[i];
            if(c==' '){
                result.push_back(follow);
                follow="";
            }else{
                follow+=c;
                if(rec.find(follow)!=rec.end()){
                   result.push_back(follow);
                   follow="";
                   while(i<n&&sentence[i]!=' ')i++;
                }
            }
        }
        string ans="";
        for(string &s:result){
            ans+=s+" ";
        }
        if(follow==""){
            ans.pop_back();
            return ans;
        }
        return ans+follow;
    }
};