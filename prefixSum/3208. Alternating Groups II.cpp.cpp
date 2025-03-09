#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
        int result=0;
        int leng=1;
        for(int i=1;i<(n+k-1);i++){
            if(colors[i%n]!=colors[(i-1+n)%n]){leng++;
            }else leng=1;
            if(leng>=k)result++;
        }
        return result;
    }
};