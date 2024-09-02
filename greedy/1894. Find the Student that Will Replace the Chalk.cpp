#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum =0;
        int n = chalk.size();
        for(int i =0;i<n;i++)sum+=chalk[i];
        int times= k%sum;
        int index=0;
        while(true){ 
            if(times>=chalk[index%n]){
                times-=chalk[index%n];
                index++;
            }else break;
        }
        return index%n;
    }
};