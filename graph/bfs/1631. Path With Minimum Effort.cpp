#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
class Solution {
public:
    int n ,m;
    bool vis[101][101];
    bool isOk(int i,int j ){
        return i>=0&&j>=0&&i<n&&j<m;
    }
    int minimumEffortPath(vector<vector<int>>& h) {
        this->n =h.size();
        this->m =h[0].size();
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>> >pq;
        pq.push({0,0,0});
        while(pq.size()){
            int x=pq.top()[1];
            int y=pq.top()[2];
            int hh=pq.top()[0];
            pq.pop();
            if(vis[x][y])continue;
            vis[x][y]=1;
            if(x==n-1&&y==m-1)return hh;
            for(int i =0;i<4;i++){
                int X=dx[i]+x;
                int Y=dy[i]+y;
                if(isOk(X,Y)&&!vis[X][Y]){
                    int hei=max(hh,abs(h[X][Y]-h[x][y]));
                    pq.push({hei,X,Y});
                }
            }
        }
        return -1;
    }
};