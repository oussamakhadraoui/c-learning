 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int flip11=0;
        int flip22=0;
        int n=grid.size();
        int m = grid[0].size();
        for(int i =0;i<n;i++){
            int a=0;
            int b=m-1;
            while(a<=b){
                if(grid[i][a]!=grid[i][b]){flip11++;}
                a++;
                b--;
            }
        }
        for(int i =0;i<m;i++){
            int a=0;
            int b=n-1;
            while(a<=b){
                if(grid[a][i]!=grid[b][i]){flip22++;}
                a++;
                b--;
            }
        }
        return min(flip11,flip22);
    }
};