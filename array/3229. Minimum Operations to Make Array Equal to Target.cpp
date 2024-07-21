#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        int n=nums.size();
        vector<int>rec(n+1,0);
        for(int i =0;i<n;i++){
            rec[i]=(nums[i]-target[i]);
        }
        long long result=0;
        int nega=0,pos=0;
        for(int i =0;i<rec.size();i++){
            if(rec[i]>0){
                if(rec[i]>pos){
                    result+=rec[i]-pos;                    
                }
                pos=rec[i];
                nega=0;
            }else if(rec[i]<0){
                if(-rec[i]>(nega)){
                    result+=(-rec[i]-nega);
                }
                pos=0;
                nega=(-rec[i]);
            }else{
                nega=pos=0;
            }
        }
        return result;
    }
};