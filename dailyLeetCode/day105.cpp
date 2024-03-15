 #include <bits/stdc++.h>
 using namespace std;
class Solution {
public:
 vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        int left[n];
        int right[n];
        int stack=1;
        for(int i=0;i<n;i++){
            stack*=nums[i];
            left[i]=stack;
        }
        stack=1;
        for(int i =n-1;i>=0;i--){
            stack*=nums[i];
            right[i]=stack;
        }
        vector<int>result(n);
        result[0]=right[1];
        result[n-1]=left[n-2];
        for(int i =1;i<n-1;i++){
            result[i]=left[i-1]*right[i+1];
        }
        return result;
    }
};
