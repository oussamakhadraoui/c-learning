#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int result=0;
        int n = grumpy.size();
        for(int i =0;i<n;i++){
            if(grumpy[i]==0)result+=customers[i];
        }
        int finalToAdd=0;
        int maxToAdd=0;
        int i=0;
        int j =0;
        while(i<=j&&j<n){
            int valueToAdd=grumpy[j]==1?customers[j]:0;
            maxToAdd+=valueToAdd;
            if((j-i)>=minutes){
                int valueToRemove=grumpy[i]==1?customers[i]:0;
                maxToAdd-=valueToRemove;
                i++;
            }
            finalToAdd=max(finalToAdd,maxToAdd);
            j++;
        }
        return result+finalToAdd;
    }
};