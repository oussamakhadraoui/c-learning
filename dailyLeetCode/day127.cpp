 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<int>st;
        unordered_map<int,int>badIndex;
        int n = s.size();
        
        for(int i=0;i<n;i++){
            if(s[i]=='(')st.push(i);

            if(s[i]==')'){
                if(st.empty())badIndex[i]=i;
                else st.pop();
            }
        }
        string result="";
        while(!st.empty()){
            int topVal=st.top();
            badIndex[topVal]=topVal;
            st.pop();
        }
         for(int i=0;i<n;i++){
             if(badIndex.contains(i))continue;
             result+=s[i];
         }
        return result;
        
    }
};