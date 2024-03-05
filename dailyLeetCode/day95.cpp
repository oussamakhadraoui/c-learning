#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumLength(string s) {
        int i=0,n=s.size(),j=n-1;
        if(n==1){
            return 1;
        }
        while(i<j&&s[i]==s[j]){
               while(s[i+1]==s[j]&&i+1<j){
                  i++;
               }
                while(s[j-1]==s[i]&&i<j-1){
                  j--;
               }
                i++,j--;

        }
        return j-i+1;
    }
};