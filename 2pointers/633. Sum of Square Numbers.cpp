#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a=sqrt(c);
        long long b =0;
        while(b<=a){
            long long square=a*a+b*b;
            if(square==c)return true;
            if(c>square)b++;
            else a--;
        }
        return false;
    }
};