 #include <bits/stdc++.h>
 using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
class Solution {
public:
    int m,n;
    int maxI=0,maxJ=0;
    vector<vector<int>> result;
    void dfs(int i ,int j,vector<vector<int>>& land,int resCount){
        if(i>=n||j>=m||i<0||j<0||land[i][j]==0)return;
        land[i][j]=0;
        maxI=max(maxI,i);
        maxJ=max(maxJ,j);
        for(int k=0;k<4;k++){
            int vx=dx[k]+i;
            int vy=dy[k]+j;
            dfs(vx,vy,land,resCount);
        }
        result[resCount][2]=maxI;
        result[resCount][3]=maxJ;        
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        this-> n=land.size(),this->m=land[0].size();
        int resCount=0;
        
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(land[i][j]==1){
                    maxI=0,maxJ=0;
                    result.push_back({i,j,0,0});
                    dfs(i,j,land,resCount);
                    resCount++;
                }
            }
        }
        return result;
    }
};