#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
unsigned GetNumberOfDigits (unsigned i)
{
    return i > 0 ? (int) log10 ((double) i) + 1 : 1;
}
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>rec;
        for(int num:arr1){
            while(num){
                rec[num]++;
                num/=10;
            }
        }
        int result=0;
        for(int num:arr2){
            while(num){
                if(rec[num]){
                    int x=GetNumberOfDigits(num);
                    result=max(result,x);
                    num=0;
                }
                num/=10;
            }
        }
        return result;
    }
};