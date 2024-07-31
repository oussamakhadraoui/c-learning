    #include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[1001];
    int rec(int start,vector<vector<int>>& books, int shelfWidth){
        if(start>=books.size())return 0;
        if(dp[start]!=-1)return dp[start];
        int result=INT_MAX;
        int curH=0;
        int cloneW=shelfWidth;
        for(int i =start;i<books.size();i++){
            int height=books[i][1];
            int width=books[i][0];
            if(cloneW<width) break;
            
            curH=max(curH,height);
            cloneW-=width;

            result=min(result,curH+rec(i+1,books,shelfWidth));
        }
     
        return dp[start]=result;
    }
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        memset(dp,-1,sizeof(dp));
        return rec(0,books,shelfWidth);
    }
};