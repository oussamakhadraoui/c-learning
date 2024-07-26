#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int dijekstra(int start,unordered_map<int, vector<pair<int,int>> >&node,int&dist){
        unordered_map<int,int>cities;
        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>> >pq;
        pq.push({0,start});
        while(pq.size()){
            int dist1=pq.top().first;
            int clone=pq.top().second;
            pq.pop();
            if(cities[clone])continue;
            cities[clone]=1;
            for(auto& nd:node[clone]){
                int totalDist=nd.second+dist1;
                if(totalDist<=dist)pq.push({totalDist,nd.first});
            }
            
        }
        return cities.size();
    }
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        unordered_map<int, vector<pair<int,int>> >node;
        for(auto&edge:edges){
            node[edge[0]].push_back({edge[1],edge[2]});
            node[edge[1]].push_back({edge[0],edge[2]});
        }
        int result=-1;
        int mini=INT_MAX;
        for(int i =0;i<n;i++){
            int di=dijekstra(i,node,distanceThreshold);
            if(di<=mini){
                mini=di;
                result=i;
            }
        }
        return result;
    }
};