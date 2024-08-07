#include <bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
class Solution {
public:
    int n,m;
    string s;
    bool vis[6][6];
    bool isOK(int i,int j){
        if(i>=0&&i<n&&j>=0&&j<m)return true;
        return false;
    }
    bool dfs(vector<vector<char>>& b,int start,int i ,int j){
        if(start==s.size())return 1;
        vis[i][j]=1;
        for(int x =0;x<4;x++){
            int col=i+dx[x];
            int row=j+dy[x];
            if(isOK(col,row)&&!vis[col][row]&&s[start]==b[col][row]){
                if(dfs(b,start+1,col,row))return 1;
            };
        }
        
        vis[i][j]=0;
        return 0;
    }
    bool exist(vector<vector<char>>& b, string word) {
        this-> n= b.size();
        this-> m = b[0].size();
        
        this->s=word;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(s[0]==b[i][j]&&dfs(b,1,i,j))return 1;
            }
        }
        return 0;
    };
    
};