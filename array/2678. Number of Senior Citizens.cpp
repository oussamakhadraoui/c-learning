    #include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int result=0;
        for(string &s:details){
            string c=s.substr(11,2);
            if(stoi(c)>60)result++;
        }
        return result;
    }
};