#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int flips=0;
        int result=0;
        for(int & num:nums){
            if((!num&&(flips%2==0))||(num&&(flips%2==1))){
                result++;
                flips++;
            }
        }
        return result;
    }
};
