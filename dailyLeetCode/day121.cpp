 #include <bits/stdc++.h>
 using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        bool isSpace=true;
        int n =s.size()-1;
        while(isSpace){
           isSpace=false;
           if(s[n]==' '){
               isSpace=true;
               n--;
           }
        }
        int last=n;
        int first;
        for(int i=n;i>=0;i--){
            if(s[i]==' '){
                first=i;
                break;
            }
        }
        return last-first;
        
    }
};