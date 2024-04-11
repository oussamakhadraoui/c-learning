 #include <bits/stdc++.h>
 using namespace std;
class Solution {
public:
    string removeKdigits(string num, int k) {
        int n= num.size();
        stack<char>st;
        for(char& c:num){    
            while(!st.empty()&&k!=0&&st.top()>c){
                    st.pop();
                    k--; 
                }
            st.push(c);  
        }
        while(k){
            st.pop();
            k--;
        }
        string result="";
        while(!st.empty()){
            result+=st.top();
            st.pop();
        } 
        reverse(result.begin(), result.end()); 
        int start=0;
    
        while(result[start]=='0'){
            start++;
        }
        result=result.substr(start);
        return result==""?"0":result;
    }
};