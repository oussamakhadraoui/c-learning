    #include <bits/stdc++.h>
using namespace std; 
   
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>rec;
        rec[0]=1;
        int result=0,prefixSum=0;
        
        for(int num:nums){
            prefixSum+=num;
            if(rec.find(prefixSum-goal)!=rec.end()){
                result+=rec[prefixSum-goal];
            }
            rec[num]++;
        } 
        return result;
    }