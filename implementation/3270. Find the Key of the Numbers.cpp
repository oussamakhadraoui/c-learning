#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
         string n1=to_string(num1);
         string n2=to_string(num2);
         string n3=to_string(num3);
         while(n1.size()<4)n1='0'+n1;
         while(n2.size()<4)n2='0'+n2;
         while(n3.size()<4)n3='0'+n3;
         string result="";
         for(int i =0;i<4;i++){
            int s1=min({n1[i]-'0',n2[i]-'0',n3[i]-'0'});
            result+=to_string(s1);
         }
         return stoi(result);
    }
};