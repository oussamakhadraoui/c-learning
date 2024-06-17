#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& v) {
        int n = v.size();
        int zeros = 0;
        int ones = 0;
        
        for (int i=0 ; i<n ; i++)
        {
            if (!v[i])
                zeros++;
            else if (v[i] == 1)
                ones++;                
        }
        
        int i = 0;
        while(zeros--)
            v[i++] = 0;
        
        while(ones--)
            v[i++] = 1;
        
        while(i<n)
            v[i++] = 2;        
    }
};