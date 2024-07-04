#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSwaps(string s) {
       int sum=0;
        int maxi=0;
        for(char&c:s){
            if(c==']')sum++;
            else sum--;
            maxi=max(maxi,sum);
        }
        return (maxi+1)/2;
    }
};