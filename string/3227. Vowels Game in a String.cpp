#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isVowel(char c) {
        char vowels[] = {'a', 'e', 'i', 'o', 'u'};
        int numOfVowel = sizeof(vowels) / sizeof(vowels[0]);
        for (int i = 0; i < numOfVowel; ++i) {
            if (c == vowels[i]) {
                return true;
            }
        }
        return false;
    }
    bool doesAliceWin(string s) {
        bool result=false;
        int i=0;
        int n=s.size();
        int count=0;
        for(char&c:s){
            if(isVowel(c))count++;
        }
        if(count==0)return false;
        return true;
    }
};