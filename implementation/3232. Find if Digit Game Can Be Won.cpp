    #include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum=0;
        int sum2=0;
        for(int& i:nums ){
            if(i<10)sum+=i;
            else sum2+=i;
        }
        return sum!=sum2;
    }
};