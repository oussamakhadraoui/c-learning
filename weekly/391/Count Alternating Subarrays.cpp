 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
       long long result=0;
        int i =0,j=0,n=nums.size();
        long long counter=1;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                counter++;
            }else{
                result+=counter*(counter+1)/2;
                counter=1;
            }    
            
        }
        result+=counter*(counter+1)/2;
        return result;
    
        
    }
};