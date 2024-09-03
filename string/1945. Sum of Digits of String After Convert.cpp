#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Solution {
public:
    int getLucky(string s, int k) {
        string c="";
        for(int i =0;i<s.size();i++){
            int num=s[i]-'a'+1;
            c+=to_string(num);
        }
        int sum=0;
        while(k--){
            sum=0;
            for(int i =0;i<c.size();i++){
                sum+=c[i]-'0';
            }
            c=to_string(sum);
        }
        return sum;
    }
};