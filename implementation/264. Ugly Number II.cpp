
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int nthUglyNumber(int n) {
        int n2=0;
        int n3=0;
        int n5=0;
        vector<int>result;
        result.push_back(1);
        for(int i=1;i<=n;i++){
            int to_add=min(result[n2]*2,min(result[n3]*3,result[n5]*5));
            result.push_back(to_add);
            if(result[n2]*2==to_add)n2++;
            if(result[n3]*3==to_add)n3++;
            if(result[n5]*5==to_add)n5++;
        }
        return result[n-1];
    }
};