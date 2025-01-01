#include <bits/stdc++.h>
#include <string>
using namespace std;
class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& g, vector<vector<int>>& w) {
        vector<vector<int>>rec(n+1,vector<int>(m+1,0));
        for(int i =0;i<w.size();i++){
            int x=w[i][0];
            int y=w[i][1];
            rec[x][y]=2;
        }
        for(int i =0;i<g.size();i++){
            int x=g[i][0];
            int y=g[i][1];
            rec[x][y]=3;
            for(int j=x;j<n;j++){
                if(rec[j][y]==2)break;
                rec[j][y]=1;
            }
            for(int j=y;j<m;j++){
                if(rec[x][j]==2)break;
                rec[x][j]=1;
            }
            //////////////////////
            for(int j=x;j>=0;j--){
                if(rec[j][y]==2)break;
                rec[j][y]=1;
            }
            for(int j=x;j>=0;j--){
                if(rec[x][j]==2)break;
                rec[x][j]=1;
            }
        }
        int result=0;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(rec[i][j]==0)result++;
            }
        }
        return result;

    }
};

int main(void) { 
string s="<div><b><p>hello world</p></b></div>";
  // keep this function call here
  Solution().countUnguarded()
  return 0;
    
}