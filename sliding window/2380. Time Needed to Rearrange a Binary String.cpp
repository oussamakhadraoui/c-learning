#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int result=0;
        int go=1;
        while(go){
            bool isOk=true;
            for(int j=1;j<s.size();j++){
                if(s[j]=='1'&&s[j-1]=='0'){
                    s[j]='0';s[j-1]='1';
                    isOk=false; 
                    j++;
                };
            }
            if(!isOk)result++;
            else go=0;
        }
        return result;            
    }
};