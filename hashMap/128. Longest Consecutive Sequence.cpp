#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>rec;
        for(int &num:nums)rec.insert(num);
        int result=0;
        for(int &num:nums){
            if(rec.find(num-1)==rec.end()){
                int count=0; int pass=0;
                while(rec.find(num+pass)!=rec.end()){
                    count++,pass++;
                }
                result=max(result,count);
            } 
        }
        return result;
    }
};