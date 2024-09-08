#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string toBinary(int n){
        string result="";
        for(int i =31;i>=0;i--){
            if((n>>i)&1)result+="1";
            else result+="0";
        }
        int i=0;
        while(result[i]=='0')i++;
        return result.substr(i);
    }
    string convertDateToBinary(string date) {
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,2));
        int day=stoi(date.substr(8));
        
        return toBinary(year)+"-"+toBinary(month)+"-"+toBinary(day);
    }
};