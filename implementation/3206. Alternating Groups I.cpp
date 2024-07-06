#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size();
        int result=0;
        for(int i =0;i<n;i++){
            if(colors[i]!=colors[(i-1+n)%n]&&colors[i]!=colors[(i+1)%n])result++;
        }
        return result;
    }
};