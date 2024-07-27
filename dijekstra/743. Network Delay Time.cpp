#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>graph[n+1];
        for(int i =0;i<times.size();i++){
            graph[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        
        int result=-1;
        vector<int>dis(n+1,INT_MAX);
        dis[k]=0;
        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>> >pq;
        pq.push({0,k});
        while(pq.size()){
            int dist=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            for(auto v:graph[node]){
                int tot=v.second+dist;
                if(tot<dis[v.first]){
                    dis[v.first]=tot;
                    pq.push({tot,v.first});
                }
            }
        }
        for(int i =1;i<dis.size();i++){
       
            if(dis[i]==INT_MAX)return -1;
            result=max(result,dis[i]);
        }
        return result;
    }
};