 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    vector<vector<int>>dp;
    int k;
    
    int rec(vector<int>&occ,int i,int j){
        if(i>=j)return 0;
        if(occ[j]-occ[i]<=k)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
 
        return dp[i][j]= min(occ[i]+rec(occ,i+1,j),occ[j]-occ[i]-k+rec(occ,i,j-1));
    }
    
    int minimumDeletions(string word, int k) {
        this->k=k;
        int start =0;
        vector<int>occ(26,0);
        for(char& c:word){
            if(!occ[c-'a'])start++;
            occ[c-'a']++;
        }
        sort(occ.begin(),occ.end());
        dp=vector<vector<int>>(26,vector<int>(26,-1));
        return rec(occ,26-start,25);  
    }
};


// we see the occ of each letter
//sort them from min to max  we need to know the start position to ietrate so we count how many letters unique existe in the array we start the iteration
// from 26-start  to 25;
// we have two option delete the less freq letter and add its freq to the ans and move the pointer forward
// second option is decreqse the bigger number by freq of the bigger number minus freq of the target number -k