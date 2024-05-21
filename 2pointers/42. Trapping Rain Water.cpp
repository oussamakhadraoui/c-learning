#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxLeft=0;
        int maxRight=0;
        int result=0;
        while(i<j){
            maxLeft=max(maxLeft,height[i]);
            maxRight=max(maxRight,height[j]);
            if(maxLeft<maxRight){
                result+=maxLeft-height[i];
                i++;
            }else{
                result+=maxRight-height[j];
                j--;
            }
        }
        return result;
    }
};