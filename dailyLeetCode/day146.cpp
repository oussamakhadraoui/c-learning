 #include <bits/stdc++.h>
 using namespace std;
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int>row(n);
        vector<int>prevRow(n);
        for(int i =0;i<n;i++)row[i]=grid[0][i];
        
        for(int i =1;i<n;i++){
            prevRow=row;
           
            for(int j=0;j<n;j++){
              int minVal=INT_MAX;
              for(int k=0;k<n;k++){
                  if(k==j)continue;
                  minVal=min(minVal,prevRow[k]);
              }
              row[j]=grid[i][j]+minVal;  
            }
            
        }
        int result=INT_MAX;
        for(int i=0;i<n;i++){
            result=min(result,row[i]);
        }
        return result;
    }
};