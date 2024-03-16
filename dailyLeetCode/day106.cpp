 #include <bits/stdc++.h>
 using namespace std;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>rec{{0,-1}};
        int result=0;
        int prefix=0;
        int n= nums.size();
        for(int i=0;i<n;i++){
            prefix+=nums[i]==0?-1:1;
            if(rec.count(prefix))result=max(result,i-rec[prefix]);
            else rec[prefix]=i;
        }
        return result;
    }
};