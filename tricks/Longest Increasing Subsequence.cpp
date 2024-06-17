#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>len;
        len.push_back(nums[0]);
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==len.back())continue;
            if(nums[i]>len.back())len.push_back(nums[i]);
            else{
                vector<int>::iterator upper =lower_bound(len.begin(),len.end(),nums[i]);
                int index =upper - len.begin();
                len[index]=nums[i];
            }
        }
        return len.size();
    }
};

// this approach is about search the continuous increasing sub 
// so the approach is if we found an element more than the back of len array we push it
// if we found an element under the back of len we search for it s specific position and we add it
//  with this approach we can find the len of the subsequence 