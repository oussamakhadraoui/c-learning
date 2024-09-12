#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>rec;
        for(int i =0;i<allowed.size();i++){
            rec[allowed[i]]++;
        }
        int result=0;
        for(string &s:words){
            bool isOk=true;
            for(char&c:s){
                if(rec[c]==0)isOk=false;
            }
            if(isOk)result++;
        }
        return result;
    }
};