#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void backtrack(int close,int open,string s,vector<string>&result,int n){
        if(s.size()==n*2){
            result.push_back(s);
            return;
        }
        if(open<n){
            string ss=s+"(";
            backtrack(close,open+1,ss,result,n);
        }
        if(open>close){
            string ss=s+")";
            backtrack(close+1,open,ss,result,n);           
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        string s="";
        backtrack(0,0,s,result,n);
        return result;
    }
};