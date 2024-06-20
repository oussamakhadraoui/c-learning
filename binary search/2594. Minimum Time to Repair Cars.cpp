#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isOk(long long mid,vector<int>& ranks,int cars){
        long long result=0;
        for(int i =0;i<ranks.size();i++){
            long long coef= mid/ranks[i];
          
            result+=floor(sqrt(coef));
            if(cars<=result)return true;
        }
        return false;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long int j = 1e14;
        long long int i=0 ;
        long long result=0;
        
        while(i<j){
            long long mid =(j+i)/2;
     
            if(isOk(mid,ranks,cars)){
                j=mid;
            }else{
                i=mid+1;
            }
        }
        return i;
        
    }
};