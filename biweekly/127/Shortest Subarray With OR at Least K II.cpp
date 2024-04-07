 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    
    int convertToInt(vector<int>&bit){
        int result=0;
        for(int i =0;i<32;i++){
            result+=(bit[i]>0?1:0)*pow(2,i);
        }
        return result;
    }
    
    void addBinary(int k,vector<int>&bit){
        int i=0;
        while(k>0){
            bit[i]=bit[i]+k%2;
            k/=2;
            i++;
        }
        
    }
    
        void substructBinary(int k,vector<int>&bit){
        int i=0;
        while(k>0){
            bit[i]=bit[i]-k%2;
            k/=2;
            i++;
        }
        
    }
    
    int minimumSubarrayLength(vector<int>& nums, int k) {
       int i =0,j=0,n=nums.size();
        int result= INT_MAX;
        vector<int>bit(32,0);
        while(i<=j&&j<n){
           addBinary(nums[j],bit);
           while(convertToInt(bit)>=k&&i<=j){
               result=min(result,j-i+1);
               substructBinary(nums[i],bit);
               i++;
           }
           
           j++;
       }
        return result== INT_MAX?-1:result;
    }
};