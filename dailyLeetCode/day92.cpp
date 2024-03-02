 #include <bits/stdc++.h>
 using namespace std;
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size() ,l=0 ,r=n-1;
        vector<int>result(n);
        for(int i=n-1;i>=0;i-- ){
            int val;
            if(abs(nums[l])>=abs(nums[r])){
                val=nums[l];
                l++;
                
            }else{
                val=nums[r];
                r--;
            }
            result[i]=val*val;
        }
        return result;
    }