#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        queue<int>numb;
        int n = nums.size();
        int result=0;
        for(int i =0;i<n;i++){
            while(!numb.empty()&&numb.front()<=i)numb.pop();
            if((nums[i]==1&&numb.size()%2==0)||(nums[i]==0&&numb.size()%2==1))continue;
            if(i+k>n)return -1;
            numb.push(i+k);
            result++;
        }
        return result;
    }
};