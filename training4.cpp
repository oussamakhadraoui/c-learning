#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        long long result=0;
        unordered_map<int,vector<int>>track;
        int n= hours.size();
        for(int i =0;i<n;i++){
            hours[i]=hours[i]%24;
            track[hours[i]].push_back(i);
        }
        for(int i =0;i<n;i++){
            int toFind=24-hours[i];
            if(track[toFind].size()>0){
                for(int j=0;j<track[toFind].size();j++){
                    if(track[toFind][j]>i)result++;
                }
            }
        }
        return result;
        
    }
};
int main(){
 freopen("a.txt","r",stdin);
 vector<int>input({12,12,30,24,24});
 long long result=Solution().countCompleteDayPairs(input);
 return 0;
}