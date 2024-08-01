    #include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    int distinctPrimeFactors(vector<int>& nums) {
        unordered_map<int,int>rec;
        
        for(int n:nums){
            for(int i =2;i*i<=n;i++){
                if(n%i==0){
                    rec[i]++;
                    while(n%i==0){
                        n/=i;
                    }
                }
            }
            if(n!=1)rec[n]++; 
        }
        return rec.size();
    }
};