#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n =nums.size();
        vector<int>result;
        for(int i =0;i<=n-k;i++){
            vector<int>clone(nums.begin()+i,nums.begin()+k+i);
            vector<int>clone2=clone;
            sort(clone2.begin(),clone2.end());
            bool isOk=true;
            for(int j=1;j<k;j++){
                if(clone[j]!=clone2[j-1]+1){
                    isOk=false;
                    break;
                }
            }
            if(isOk){
                result.push_back(clone[k-1]);
            }else{
                result.push_back(-1);
            }

        
        }
        return result;
    }
};