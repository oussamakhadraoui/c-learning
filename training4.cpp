#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int result=0;
        int n = nums.size();
        for(int i =0;i<=(n-k);i++){
            if(nums[i]==1)continue;
            for(int j=i;j<(i+k);j++)nums[j]=nums[j]^1;
            result++;
        }
        return result;
    }
};
int main(){
  vector<int>vec{0,0,0,1,0,1,1,0};
  int k=3;
  int result=Solution().minKBitFlips(vec,k);
 return 0;
}