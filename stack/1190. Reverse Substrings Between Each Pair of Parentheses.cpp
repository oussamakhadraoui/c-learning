#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        int n =s.size();
        for(int i =0;i<n;i++){
            if(s[i] != ')' )st.push(s[i]);
            else{
                string s="";
                while(st.top()!= '(' ){
                    s+=st.top();
                    st.pop();
                }
                st.pop();
                for(char &c:s)st.push(c);
            }
        }
        string result="";
        while(st.size()){
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};