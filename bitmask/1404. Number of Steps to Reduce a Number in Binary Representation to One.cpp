#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSteps(string s) {
        int rest=0;
        int result=0;
        int n = s.size()-1;
        for(int i =n;i>=1;i--){
            if((s[i]*1+rest)%2==0)result++;
            else{
                result+=2;
                rest=1;
            }
        }
        return result+rest;
    }
};