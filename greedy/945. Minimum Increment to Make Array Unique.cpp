#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        int maxi=0;
        for(int&num:nums)maxi=max(maxi,num);
        vector<int>freq(maxi+n,0);
        for(int&num:nums)freq[num]++;
        int result=0;
        for(int i=0;i<freq.size();i++){
            while(freq[i]>1){
                int j=i+1;     
                freq[j]++;
                freq[i]--;
                result+=(j-i);
            }
        }
        return result;
    }
};