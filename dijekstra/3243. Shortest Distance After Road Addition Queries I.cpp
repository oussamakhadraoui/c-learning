#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dijekstra(int n ,vector<pair<int,int>>graph[n]){
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
        vector<int>vis(n,0);
        vector<int>d(n,INT_MAX);
        pq.push({0,0});
        while(pq.size()){
            int dis=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            if(vis[node])continue;
            vis[node]=1;
            for(auto & no:graph[node]){
                int dis2=no.second;
                int nodo=no.first;
                if(dis2+dis<d[nodo]){
                    d[nodo]=dis2+dis;
                    pq.push({dis2+dis,nodo});
                }
            }
        }
        return d[n-1];
        
    }
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<pair<int,int>>graph[n];
        for(int i=0;i<n-1;i++)graph[i].push_back({i+1,1});
        vector<int>result;
        for(auto &q:queries){
            graph[q[0]].push_back({q[1],1});
            result.push_back(dijekstra(n,graph));
        }
        return result;
        
    }
};