#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,vector<int>>rec;
        for(int i=0;i<cards.size();i++){
            rec[cards[i]].push_back(i);
        }
        int result=INT_MAX;
        for(auto &[key,val]:rec){
            if(val.size()==1)continue;
            for(int x=1;x<val.size();x++){
                result=min(result,val[x]-val[x-1]+1);
            }
        }
        return result==INT_MAX?-1:result;
    }
};