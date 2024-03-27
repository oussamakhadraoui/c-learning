
 #include <bits/stdc++.h>
 using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int i=0,j=0,result=0,prodSum=1,n=nums.size();
        while(i<=j&&j<n){
            prodSum*=nums[j];
            while(prodSum>=k&&i<=j){
                prodSum/=nums[i];
                i++;
            }  
            result+=(j-i+1);
            j++;
        } 
        return result;
    }
};