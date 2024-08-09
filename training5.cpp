#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int n,m;
    bool mrigelBe7yetRassYousri(int i ,int j){
        return i<n&&j<m; 
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        this-> n = grid.size();
        this-> m = grid[0].size();
        if(n<3||m<3)return 0;
        int countX=0;
        int countY=0;
        int result=0;

        while(true){
            int count=0;
            for(int i =countX;i<countX+3;i++){
                for(int j=countY;j<countY+3;j++){
                    if(mrigelBe7yetRassYousri(i,j)&&grid[i][j]>=1&&grid[i][j]<=9)
                    {
                        count+=grid[i][j];
                    }else{
                        i=n;
                        j=m;
                        count=0;
                    }
                }
            }
            if(count==45)result++;
            countY++;
            if(countY==m&&countX==n-1)break;
            if(countY==m){
                countX++;
                countY=0;
            }
        }
        return result;
    }
};
int main(){
    vector<vector<int>>grid={{4,3,8,4},{9,5,1,9},{2,7,6,2}};
    Solution().numMagicSquaresInside(grid);

    return 0;
}