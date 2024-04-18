 #include <bits/stdc++.h>
 using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int k=0;k<4;k++){
                    if(!grid[i][j])continue;
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if(ni<0 || ni>=n || nj<0 || nj>=m || !grid[ni][nj]){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};