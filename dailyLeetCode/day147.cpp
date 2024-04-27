 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    string key ,ring;
    vector<vector<int>>dp;
    int n,m;
    int rec(int ringIndex,int keyIndex){
        
        if(keyIndex==m)return 0;
        if(dp[ringIndex][keyIndex]!=-1)return dp[ringIndex][keyIndex];
        
        int minVal=INT_MAX;
        for(int i=0;i<n;i++){
            if(ring[i]==key[keyIndex]){
                int distance=smallDist(ringIndex,i)+1;
                int nextKey=rec(i,keyIndex+1);
                minVal=min(minVal,distance+nextKey);                
            }
        }
        return dp[ringIndex][keyIndex]=minVal;
    }
    
    int smallDist(int i,int j){
        int direct= abs(i-j);
        int indirect=n-direct;
        return min(direct,indirect);
    }
    
    int findRotateSteps(string ring, string key) {
        this->n=ring.size();
        this->key=key;
        this->ring=ring;
        this->m=key.size();
        dp=vector<vector<int>>(n,vector<int>(m,-1));
        return rec(0,0);
    }
};