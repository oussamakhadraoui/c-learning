#include <bits/stdc++.h>
using namespace std;
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>gr(n);
        for(auto& flight:flights){
            gr[flight[0]].push_back({flight[1],flight[2]});
        }
        vector<int>distances (n,INT_MAX);
        queue<pair<int,int>>q;
        q.push({src,0});
        int stops=0;
        while(stops<=k&&!q.empty()){
            int len=q.size();
            while(len--){
                auto[node,distance]=q.front();
                q.pop();
                for(auto&[next,coast]:gr[node]){
                    if(coast+distance>=distances[next])continue;
                    distances[next]=coast+distance;
                    q.push({next,distances[next]});
                }
            }
            stops++;
        }
        return distances[dst]==INT_MAX?-1:distances[dst];
    }