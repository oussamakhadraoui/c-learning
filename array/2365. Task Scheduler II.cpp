#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        unordered_map<long long,long long>track;
        int n =tasks.size();
        long long result=0;
    
    
        for(int i =0;i<n;i++){
            if(!track[tasks[i]]){
                track[tasks[i]]=space+result+1;
                result++;
            }else{
                if(track[tasks[i]]>result)result=track[tasks[i]];
                track[tasks[i]]=space+result+1; 
                result++;
            }
        }
        return result;
    }
};