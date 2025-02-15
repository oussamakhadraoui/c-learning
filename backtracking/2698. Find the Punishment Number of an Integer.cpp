#include <bits/stdc++.h>

using namespace std;
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool backtrack(string& s, int start, int target, int sum) {
        if (start == s.length())
            return sum == target;
            
        int curr = 0;
        for (int i = start; i < s.length(); i++) {
            curr = curr * 10 + (s[i] - '0');
            if (backtrack(s, i + 1, target, sum + curr))
                return true;
        }
        return false;
    }
    int punishmentNumber(int n) {
       int result=0;
       for(int i =1;i<=n;i++){
            string s = to_string(i * i);
            if(backtrack(s,0,i,0))result+=i*i;
       } 
       return result;
    }
};