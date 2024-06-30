#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        int n = obstacles.size();
        vector<int>result(n);
        vector<int>lis;
        
        for(int i =0;i<n;i++){
            int val= obstacles[i];
            if(lis.empty()||lis.back()<=val){
                lis.push_back(val);
                result[i]=lis.size();
            }else{
                int index=upper_bound(lis.begin(),lis.end(),val)-lis.begin();
                lis[index]=val;
                result[i]=index+1;
            }
        }
        return result;
    }
};

//go to the tricks longest increasing sub sec 
//the only added trick is we do an upper bound cause we need the most above element when we found it
// the length is index+1 cause indexing start from 0