#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    string smallestNumber(string pattern) {
        stack<int>rec;
        int n = pattern.size();
        string result="";
        for(int i =0;i<=n;i++){
            rec.push(i+1);
            if(i==n||pattern[i]=='I'){
                while(rec.size()){
                    result+=to_string(rec.top());
                    rec.pop();
                }
            }
        }
        return result;
    }
};