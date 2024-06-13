#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i =0;int j =nums.size()-1;
        int n =nums.size();
        int ans;
        while(i<=j){
            int mid=(i+j)/2;
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[j]<=mid)count++;
            }
            if(count<=mid){
                
                i=mid+1;
            }else{
                ans=mid;
                j=mid-1;
            }
        }
        return ans;
    }
};

// we are searching for length more then the mid
// 1 2 3 4 5 6 6 7
//the mid is 5
// we search all element less then 5 and we do our binary search