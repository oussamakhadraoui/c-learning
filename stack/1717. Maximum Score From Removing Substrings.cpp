#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
  
    int gainer(string&s,string comp,int g){
        int result=0;
        stack<int>st;
        for(int i =0;i<s.size();i++){
            if(st.empty())st.push(s[i]);
            else if(st.top()==comp[0]&&s[i]==comp[1]){
                result+=g;
                st.pop();
            }else st.push(s[i]);  
        }
        s="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return result;
    }
    int maximumGain(string s, int x, int y) {        
        string first="ab";
        string second="ba";
        if(x<y){
            swap(first,second);
            swap(x,y);
        }

        return gainer(s,first,x)+gainer(s,second,y);
    }
};