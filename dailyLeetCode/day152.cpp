#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>map;
        int result=-1;
        for(int num:nums){
            if(map[-num]){
                result=max(result,abs(num));
            }
            map[num]++;
        }
        return result;
    }
};