
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>rec;
        int Maxi=1;
        for(int num:nums){
            if(rec[num]){
                rec[num]++;
                 Maxi=max(Maxi,rec[num]);
            }else rec[num]++;
        }
        int result = 0;
        cout<<Maxi<<endl;
        for(auto val:rec){
            if(val.second==Maxi){
                result+=val.second;
            }
        }
        return result;
    }
};