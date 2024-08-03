 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int res=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i =0;i<n/2;i++){
            for(int j=0;j<m/2;j++){
                vector<int>rec={grid[n-i-1][m-j-1],grid[i][m-j-1],grid[i][j],grid[n-i-1][j]};
                int ono=0;
                for(int &x:rec){
                    if(x)ono+=1;  
                }
                res+=min(ono,4-ono);
            }
        }
        int pos=0;
        int count=0;
        if(n%2!=0){
            for(int i=0;i<m/2;i++){
                if(grid[n/2][i]!=grid[n/2][m-i-1]){
                    res++;
                    pos++;
                }else{
                    if(grid[n/2][i]==1)count++; 
                }
            }
        }
        if(m%2!=0){
             for(int i=0;i<n/2;i++){
                if(grid[i][m/2]!=grid[n-i-1][m/2]){
                    res++;
                    pos++;
                }else{
                    if(grid[i][m/2]==1)count++;
                }
            }           
        }
        if(pos==0&&count%2!=0)res+=2;
        if(n%2!=0&&m%2!=0&&grid[n/2][m/2]==1)res++;


        return res;
    }
};