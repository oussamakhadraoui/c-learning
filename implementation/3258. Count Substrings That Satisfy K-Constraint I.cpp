#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n =s.size();
        int result=0;
        for(int i =0;i<n;i++){
            int ones=0;int zero=0;
            for(int j=i;j<n;j++){
                if(s[j]=='0')zero++;
                else ones++;
                if(ones<=k||zero<=k)result++;
                else break;
            }
        }
        return result;
    }
};