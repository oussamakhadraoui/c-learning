#include <bits/stdc++.h>
using namespace std;


const int N=1001; 
class Solution {
public:
    bool vis[N];
    void dfs(int i,vector<vector<int>>& rooms){
        if(vis[i])return ;
        vis[i]=true;
        for(int room:rooms[i]){
            dfs(room,rooms);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<vector<int>>graph(n);
        for(int i =0;i<rooms.size();i++){
           for(int j=0;j<rooms[i].size();j++){
               graph[i].push_back(rooms[i][j]);
           }
        }
        memset(vis,false,sizeof(vis));
        dfs(0,graph);
        for(int i=0;i<n;i++){
            if(!vis[i])return false;
        }
        return true;
    }
};