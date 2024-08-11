#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int result=0;
        for(string &c:commands){
            if(c=="DOWN")result+=(n);
            if(c=="RIGHT")result++;
            if(c=="LEFT")result--;
            if(c=="UP")result-=(n);
        }
        return result;

    }
};