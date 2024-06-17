#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char,int>rec;
        int n= s.size();
        vector<bool>seen(26,false);
        for(int i =0;i<n;i++)rec[s[i]]=i;
        stack<char>result;

        for(int i =0;i<n;i++){
            if(seen[s[i]-'a'])continue;
            while(result.size()>0&&s[i]<result.top()&&rec[result.top()]>i){
                
                seen[result.top()-'a']=false;
                result.pop();
            }
            result.push(s[i]);
            seen[s[i]-'a']=true;
        }
        string ans="";
        while(result.size()){
            ans+=result.top();
            result.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};