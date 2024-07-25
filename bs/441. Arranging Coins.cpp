#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    // int arrangeCoins(int n) {
    //     int result=0;
    //     int i=1;
    //     while(n>=0){
    //         result++;
    //          n-=i;
    //         i++;
    //     }
    //     return result-1;
    // }
    int arrangeCoins(int n) {
        int low = 1;
        int high = n;
        while(low <= high) {
            long long mid = low + (high - low) / 2;
            if(mid * (mid + 1) / 2 > n) high = mid - 1;
            else low = mid + 1;
        }
        return high;
    }
};

//nlawej 3la elemnt eli arithmetic sequence sum mte3ou equal lel n;