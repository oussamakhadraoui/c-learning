#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    void minsZero(vector<int>&bit,int x){
        for(int i =0;i<32;i++){
            if(!(1<<i&x))bit[i]--;
        }
    }
    void addZero(vector<int>&bit,int x){
        for(int i =0;i<32;i++){
            if(!(1<<i&x))bit[i]++;
        }
    }
    int calc(vector<int>&bit){
        int result=0;
        for(int i =0;i<32;i++){
            result+=(1<<i)*(bit[i]==0);
        }
        return result;
    }
    int minimumDifference(vector<int>& nums, int k) {
        int n =nums.size();
        vector<int>zeroBit(32,0);
        int i=0,j=0;
        int result=INT_MAX;
        int ranged=0;
        while(j<n){
            addZero(zeroBit,nums[j]);
            ranged=calc(zeroBit);
            result=min(result,abs(k-ranged));
            while(i<j && ranged<k){
                minsZero(zeroBit,nums[i]);
                ranged=calc(zeroBit);
                result=min(result,abs(k-ranged));
                i++;
            }  
            if(result==0)return 0;
            j++;
        }
        return result;
    }
};