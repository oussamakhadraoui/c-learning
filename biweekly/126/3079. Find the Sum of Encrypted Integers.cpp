#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int encrypt(int x){
        string s =to_string(x);
        int len = s.size();
        int el=1;
        int creaser=10;
        for (int i =1;i<len;i++){
            el+=creaser;
            creaser*=10;
            
        }
        int digit=0;
        for(char c : s){
            digit=max(digit,c-'0');
            }
        int result = el*digit;

        return len==1?x:result;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
       int sum=0;
        for(int num:nums){
            sum+=encrypt(num);
        }
        return sum;
    }
};