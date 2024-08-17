#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int Mini=arrays[0].front();
        int Maxi=arrays[0].back();
        int result=0;
        for(int i=1;i<arrays.size();i++){
            int Mi=arrays[i].front();
            int Ma=arrays[i].back();
            
            result=max(result,abs(Maxi-Mi));
            result=max(result,abs(Ma-Mini));
            
            Mini=min(Mi,Mini);
            Maxi=max(Ma,Maxi);
        }
        return result;
    }
};