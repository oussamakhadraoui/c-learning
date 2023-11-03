#include <iostream>
#include <limits.h>
using namespace std;
int dp[181] ;
 int findCatalan(int n) {

    if (dp[n] != 0)
        return dp[n];

    if (n==0)
        dp[n] = 1;
    else
    {
        dp[n]=0;
        for (int i=0 ; i<n ; i++)
            dp[n]+=findCatalan(i)*findCatalan(n-1-i);
    }
    return dp[n];
    }
int main()
{
cout<<findCatalan(175)<<endl;
return 1;
} 
// search iostream