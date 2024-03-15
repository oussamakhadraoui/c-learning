 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    int maximumCount(vector<int>& nums) {
      int n= nums.size();
   
      int i=0,j=n-1;
      if(nums[i]==0&&nums[j]==0)return 0;
      int index=0;
      while(j>i){
          int mid= (i+j)/2;
          if(nums[mid]==0){
              i=mid;
              break;
           
          }else if(nums[mid]>0){
              j=mid-1;
          }else{
              i=mid+1;
          }
      }
      j=i;
      while(nums[i]<=0&&i!=n-1){
          i++;
      }
      while(nums[j]>=0&&j!=0){
          j--;
      }
      return max(j+1,n-i);
        
    }
};
 class Solution2 {
public:
    int maximumCount(vector<int>& v) {
        int n = v.size();
        int firstPos = lower_bound(v.begin(),v.end(),1) - v.begin();
        int firstZero = lower_bound(v.begin(),v.end(),0) - v.begin();
        int numberOfZeros = firstPos - firstZero;
        return max(n - firstPos,firstPos - numberOfZeros);
    }
};