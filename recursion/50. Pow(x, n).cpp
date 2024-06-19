#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        if(x==0)return 0;
        if(n==0)return 1;
        if(n<0){
            n=abs(n);
            x=1/x;
        }
        if(n%2==0){
            return myPow(x*x,n/2);
        }else{
            return x*myPow(x,n-1);
        }
    }
};