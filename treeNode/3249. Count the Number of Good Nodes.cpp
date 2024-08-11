#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int N;
    int dfs(int&result,vector<int>dp[],int node,int parent){
        int size=1;
        unordered_set<int>checker;
        for(int &i :dp[node]){
            if(parent==i)continue;
            int val=dfs(result,dp,i,node);
            checker.insert(val);
            size+=val;
        }
        if(checker.size()<=1)result++;
        return size;
    }
    int countGoodNodes(vector<vector<int>>& edges) {
        this-> N= edges.size()+1;
        vector<int>dp[N];
        for(auto &x:edges){
            dp[x[0]].push_back(x[1]);
            dp[x[1]].push_back(x[0]);
        }
        int result=0;
        dfs(result,dp,0,-1);
        return result;
    }
};