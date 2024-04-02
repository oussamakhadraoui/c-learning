 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int>rec(26,0);
        int i =0,j=0,n=s.size();
        int result=0;
        while(i<=j&&j<n){
            rec[s[j]-'a']++;
            while( rec[s[j]-'a']>2&&i<=j){
                 rec[s[i]-'a']--;
                 i++;
            }
            result=max(result,j-i+1);
            j++;
        }
        return result;
    }
};