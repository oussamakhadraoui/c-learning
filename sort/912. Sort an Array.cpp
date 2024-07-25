#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> merge(vector<int>&a,vector<int>&b){
        int nA=a.size();
        int nB=b.size();
        int n =nA+nB;
        int i=0;
        int j=0;
        int counter=0;
        vector<int>result(n);
        while(i<nA&&j<nB){
            if(a[i]<b[j]) result[counter++]=a[i++];
            else result[counter++]=b[j++];
        }
        while(i<nA)result[counter++]=a[i++];
        while(j<nB)result[counter++]=b[j++];
        return result;
    }
    vector<int>mergeSort(int i ,int j ,vector<int>& nums){
        if(i==j)return {nums[i]};
        int mid=(i+j)/2;
        vector<int>a=mergeSort(i,mid,nums);
        vector<int>b=mergeSort(mid+1,j,nums);
        vector<int>result=merge(a,b);
        return result;
    }
    vector<int> sortArray(vector<int>& nums) {
        return mergeSort(0,nums.size()-1,nums);
    }
};