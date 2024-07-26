#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    double dijekstra(int start,int end ,vector<vector<pair<int,double>>>graph,int n){
        
            priority_queue<pair<double,int>>pq;
            vector<double>result(n,0);
            result[start]=1;
    
            pq.push({1.0,start});
            while(pq.size()){
                double prob1=pq.top().first;
                int node=pq.top().second;
                pq.pop();
                if(node==end)return prob1;
                for(auto&nn:graph[node]){
                    double prob2=nn.second;
                    if(result[nn.first]<prob2*prob1){
                        result[nn.first]=prob2*prob1;
                        pq.push({prob1*prob2,nn.first});
                    }
                    
                }
            }
            return result[end];
        }
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int,double>>>graph(n);
        for(int i =0;i<edges.size();i++){
            auto edge=edges[i];
            graph[edge[0]].push_back({edge[1],succProb[i]});
            graph[edge[1]].push_back({edge[0],succProb[i]});
        }
        
        return dijekstra(start,end,graph,n);
        
    }
};