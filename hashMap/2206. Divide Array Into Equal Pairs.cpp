#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>rec;
        for(int & n:nums)rec[n]++;
        for(auto &[key,val]:rec){
            if(val%2==1)return false;
        }
        return true;
    }
};