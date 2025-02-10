#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(int i =0;i<s.size();i++){
            if(isdigit(s[i]))st.pop();
            else st.push(s[i]);
        }
        string res="";
        while(st.size()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};