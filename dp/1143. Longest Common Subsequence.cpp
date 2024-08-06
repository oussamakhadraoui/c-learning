#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size(),n=text2.size();
        vector<vector<int>>rec(m+1,vector<int>(n+1,0));
            for(int i = m-1;i>=0;i--){
                for(int j = n-1;j>=0;j--){
                    if(text1[i]==text2[j]){
                       rec[i][j]=1+ rec[i+1][j+1]; 
                    }else{
                       rec[i][j]=max(rec[i+1][j],rec[i][j+1]); 
                    }
                }
            }
        return rec[0][0];
    }
};
// class Solution {
// public:
//     string word1,word2;
//     vector<vector<int>>rec;
//     int solve(int x,int y){
//      if(x>=word1.size()|| y>=word2.size())return 0;
//         int ans=0;
//      if(rec[x][y]!=-1)return rec[x][y];   
//     if(word1[x]==word2[y]){
//         ans= 1+ solve(x+1,y+1);
//     }else{
//         ans = max(solve(x,y+1),solve(x+1,y));
//     }
      
//     return rec[x][y]=ans;
        
        
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         int m = text1.size(),n=text2.size();
//         this->word1=text1;
//         this->word2=text2;
//         rec=vector<vector<int>>(m,vector<int>(n,-1));
//         return solve(0,0);
        
//     }
// };