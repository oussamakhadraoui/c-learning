#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string threeDigits(int num){
        vector<string> lessThen20 = {
            "", "One", "Two", "Three", "Four", "Five", "Six", 
            "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", 
            "Thirteen", "Fourteen", "Fifteen", "Sixteen", 
            "Seventeen", "Eighteen", "Nineteen"
        };
        vector<string> tens  = {
            "", "", "Twenty", "Thirty", "Forty", "Fifty", 
            "Sixty", "Seventy", "Eighty", "Ninety"
        };
        string words;
        if (num >= 100) {
            words += lessThen20[num / 100] + " Hundred";
            num %= 100;
        }
        if (num >= 20) {
            words += (words.empty() ? "" : " ") + tens[num / 10];
            num %= 10;
        }
        if (num > 0) {
            words += (words.empty() ? "" : " ") + lessThen20[num];
        }

        return words;
    }
    string numberToWords(int num) {
        if(num == 0) return "Zero";
        string ans = "";
        vector<string> thousands = {"", "Thousand", "Million", "Billion"};
        for(int i = 0; num > 0; i++){
            if(num % 1000 != 0){
                
                ans = threeDigits(num % 1000) + (ans.empty() ? "" : " ") + thousands[i] + (ans.empty() ? "" : " ") + ans;
            }else ans += " ";        
            num /= 1000;
        }
        if (!ans.empty() ) {
           while(ans.back() == ' ') ans.pop_back();
        }
        return ans;
    }
};