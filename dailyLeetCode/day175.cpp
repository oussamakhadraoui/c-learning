#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int result=INT_MIN;
        int n = s.size();
        int i =0;
        int j=0;
        while(i<=j&&j<n){
            maxCost-=abs(s[j]-t[j]);
            while(maxCost<0&&j<n){
                maxCost+=abs(s[i]-t[i]);
                i++;
            }
            result=max(result,j-i+1);
            j++;
        }
        return result;
    }
};