#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int size= nums.size();
        long long maxVal=0;
        int result=0;
        int i =0;
        while(maxVal<n){
            if(i<size && nums[i]<=(maxVal+1)){
                maxVal+=nums[i];
                i++;
            }else{
                result++;
                maxVal+=(maxVal+1);
            }
        }
        return result;
    }
};