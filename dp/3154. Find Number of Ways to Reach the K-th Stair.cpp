#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    unordered_map<int,unordered_map<int,unordered_map<int,int>>>dp;
    int k ;
    int solve(int i ,int prev,int jump){
		if(i>k+1)return 0;
		if(dp.count(i)&&dp[i].count(prev)&&dp[i][prev].count(jump)){
			return dp[i][prev][jump];
		}
		int ans=(i==k);  //we didn t implement this in the base case cause we need the recursion to 
                   // go and try again for more possibility;
		if(i!=0&&!prev){
			ans+=solve(i-1,1,jump);
		}
		ans+=solve(i+pow(2,jump),0,jump+1);
		return dp[i][prev][jump]=ans;
	}
    int waysToReachStair(int k) {
        this->k=k;
		return (int)solve(1,0,0);

    }
};