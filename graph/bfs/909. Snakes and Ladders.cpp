#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
 int n ,m;
     pair<int, int> fn(int xx) {
         int x = (xx - 1) / n;
         int y = (xx - 1) % n;
         if (x % 2 == 1) {
             y = n - 1 - y;
         }
         return {x, y};
     }
     int snakesAndLadders(vector<vector<int>>& b) {
         reverse(b.begin(), b.end());
         this->n = b.size();
         this->m= b[0].size();
         queue<pair<int,int>>q;
         q.push({1,0});
         unordered_map<int,int>vis;
         vis[1] = 1;
 
         while(q.size()){
             auto [s, m] = q.front();
             q.pop();
             for(int i =1;i<=6;i++){
                 int xx=s+i;
                  pair<int,int>rc=fn(xx);
                  int x = rc.first;
                  int y = rc.second;
                  if (xx > n * n) continue;
                 if (b[x][y] != -1) {
                     xx = b[x][y];
                 }
                  if(xx==n*n)return m+1;
                  if(!vis[xx]){
                     vis[xx]=1;
                     q.push({xx,m+1});
                  }
             }
         }
         return -1;
     }
 };