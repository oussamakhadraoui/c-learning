#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isOk(vector<int>& candies, long long k,int mid){
        long long result=0;
        for(int i =0;i<candies.size();i++){
            if(!candies[i])continue;
            result+=candies[i]/mid;
        }
        return result>=k;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int i=1,j=1e9,result=0;
        while(i<=j){
            int mid = i+(j-i)/2;
            if(mid==0)return mid;
            if(isOk(candies,k,mid)){
                result=mid;
                i=mid+1;
            }else{
                j=mid-1;
            }
        }
        return result;
    }
};