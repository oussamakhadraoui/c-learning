
 #include <bits/stdc++.h>
 using namespace std;

class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(n);
        for(auto x:prerequisites){
            adj[x[1]].push_back(x[0]);
        }

        vector<int> indegree(n,0);
        for(int i=0;i<n;i++){
            for(auto x:adj[i]){
                indegree[x]++;
            }
        }

        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        int ct=0;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            ct++;
            for(auto x:adj[front]){
                indegree[x]--;
                if(indegree[x]==0){
                    q.push(x);
                }
            }
        }

        return ct==n;
    }
};