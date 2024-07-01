#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        bool result=false;
        int numOfOdds=0;
        for(int &num:arr){
            if(num%2==1)numOfOdds++;
            else numOfOdds=0;
            if(numOfOdds==3)return true;
        }
        return false;
    }
};