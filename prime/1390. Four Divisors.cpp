#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int sumFourDivisors(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++){
            int n = nums[i];
            int count=0;
            int sum=0;
            for(int j=1;j*j<=n;j++){
                if(n%j==0){
                    sum+=j;
                    count++;
                    if(n/j!=j){
                        count++;
                        sum+=(n/j);
                    }
                }
                
            }
            if(count==4)result+=sum;
        }
        return result;
    }
};