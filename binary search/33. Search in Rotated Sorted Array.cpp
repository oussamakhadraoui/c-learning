#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int i =0,j=n-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]==target)return mid;
            if(nums[mid]<nums[i]){
                if(target>=nums[mid]&&target<=nums[j]){
                    i=mid+1;
                }else{
                    j=mid-1;
                }
            }else{
                if(target<=nums[mid]&&target>=nums[i]){
                    j=mid-1;
                }else{
                    i=mid+1;
                }                
            }
        }
        return -1;
    }
};

//the idea is to find the half sorted so we check if the target exist in the half sorted 