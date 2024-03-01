  #include <bits/stdc++.h>
using namespace std;
  
    string maximumOddBinaryNumber(string s) {
        int len=s.length(),i=0,j=len-1;
        while(i<=j){
            if(s[j]=='1'&&s[i]=='0'){
                swap(s[i],s[j]);
                j--;
                i++;
            }
            if(s[j]!='1') j--;
            if(s[i]!='0') i++;
            
        } 
        swap(s[i-1],s[len-1]);
        return s;
    }