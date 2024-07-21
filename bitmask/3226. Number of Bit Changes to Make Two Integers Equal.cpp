#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int minChanges(int n, int k) {
        if((n|k)!=n)return -1;
        int diff=n^k;
        int result=0;
        while(diff>0){
            result+=(diff&1);
            diff>>=1;
        }
        return result;
    }
};