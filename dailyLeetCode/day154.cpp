#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n= people.size();
        int j=n-1;
        int l=0;
        sort(people.begin(),people.end());
        int result=0;
        for(int i=j;i>=0&&i>=l;i--){
            result++;
            int sum=people[i]+people[l];
            if(sum<=limit){
                l++; 
            }
        }
        return result;
    }
};