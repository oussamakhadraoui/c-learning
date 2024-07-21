#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maxOperations(string s) {
        int i =0;
        int j = 1;
        int cost=0;
        int result=0;
        int n = s.size();
        for(int i =n-1;i>=0;){
            bool isZero=s[i]=='0';
            while(isZero&&i>=0&&s[i]=='0')i--;
            if(isZero)cost++;
            else {result+=cost;i--;};
        }
        return result;
    }
};