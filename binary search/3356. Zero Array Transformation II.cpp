#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isOk(int mid,vector<int>& nums, vector<vector<int>>& q){
        int n=nums.size();
        vector<int>clone(n+1);
        for(int i =0;i<mid;i++){
            clone[q[i][0]]+=q[i][2];
            clone[q[i][1]+1]-=q[i][2];
        }
        int sum=0;
        for(int i =0;i<n;i++){
            sum+=clone[i];
            if(nums[i]>sum)return false;
        }
        return true;
    };
    int minZeroArray(vector<int>& nums, vector<vector<int>>& q) {
        int n =q.size();
        int i =0,j=n;
        if(!isOk(n,nums,q))return -1;
        while(i<=j){
            int mid= i+(j-i)/2;
            if(isOk(mid,nums,q)){
                j=mid-1;
            }else{
                i=mid+1;
            }
        }
        return i;
    }
};