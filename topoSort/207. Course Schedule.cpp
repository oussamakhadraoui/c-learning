#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int>indegree(n,0);
        vector<vector<int>>node(n);
        for(int i =0;i<p.size();i++){
           node[p[i][1]].push_back(p[i][0]);
            
            indegree[p[i][0]]++;
        }
        
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)q.push(i);
        }
        int result=0;
        while(!q.empty()){
            int v=q.front();
            q.pop();
            result++;
            for(int num:node[v]){
                indegree[num]--;
                if(indegree[num]==0)q.push(num);
            }
        }
        return result==n;
    }
};