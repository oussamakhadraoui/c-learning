#include <bits/stdc++.h>

using namespace std;
#define ll long long
class Solution {
public:
    int mySqrt(int x) {
           int i=1;
        int j=x;
        while(i<=j){
            ll mid=i+(j-i)/2;
            if((mid*mid)>x)j=(int)mid-1;
            else i=(int)mid+1;
        }
        return (int)j; 
    }
};