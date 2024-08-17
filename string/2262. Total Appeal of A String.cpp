#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long solve(string str, int n, char x){
        long long res = 0, count = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] == x) {
                res += ((count + 1) * (n - i));
                count = 0;
            }
            else
                count++;
        }
        return res;
    }
    long long appealSum(string s) {
        long long result=0;
        int n =s.size();
        for(char c='a';c<='z';c++){
            result+=solve(s,n,c);
        }
        return result;
    }
};