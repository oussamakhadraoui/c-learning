 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    string makeGood(string s) {
        string result="";
        for(char &c:s){
            if(!result.empty()&&abs(result.back()-c)==32)result.pop_back();
            else result+=c;
        }
        return result;
    }
};