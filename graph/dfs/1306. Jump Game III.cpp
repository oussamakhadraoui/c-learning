#include <bits/stdc++.h>
using namespace std;
int const N=5e4+1;
class Solution {

public:
    bool vis[N];
    bool dfs(int start,vector<vector<int>>&graph,vector<int>& arr){
        if(arr[start]==0)return true;
        vis[start]=1;
        for(int &x:graph[start]){
            if(!vis[x]){
                if(dfs(x,graph,arr))return true;
            }
        }
        return false;
    }
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        vector<vector<int>>graph(n);
        for(int i =0;i<n;i++){
            int n1=i+arr[i];
            int n2=i-arr[i];
            if(n1<n)graph[i].push_back(n1);
            if(n2>=0)graph[i].push_back(n2);
        }
        return dfs(start,graph,arr);
    }
};