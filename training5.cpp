#include <bits/stdc++.h>
#include <string>
using namespace std;

string CheckDOM(string s) {
  
  stack<string>st;
  for(int i =0;i<s.size();i++){
    if(s[i]=='<'){
      i++;
      string to_add="";
      while(s[i]!='>'){
        to_add+=s[i];
        i++;
      }

      if(!st.size())st.push(to_add);
      else{
        string top="/"+st.top();
        if(top==to_add)st.pop();
        else st.push(to_add);
      }
     
    }
  }
  while(st.size()&&st.top()=="/b")st.pop();
  
  string result="";
  if(st.size()>1)return "false";
  else if(st.size()==1)return st.top();
  else return "true";
  return result;

}

int main(void) { 
string s="<div><b><p>hello world</p></b></div>";
  // keep this function call here
  cout << CheckDOM(s);
  return 0;
    
}