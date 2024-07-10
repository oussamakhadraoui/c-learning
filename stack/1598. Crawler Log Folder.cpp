#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        for(string &s:logs){
            if(s=="./"||(st.empty()&&s=="../"))continue;
            else if(s=="../")st.pop();
            else st.push(s);
        }
        return st.size();
    }
};