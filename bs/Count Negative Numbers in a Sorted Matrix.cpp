 #include <bits/stdc++.h>
 using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int result=0;
        for(int index=0;index<grid.size();index++){
          int n= grid[index].size();
          int i =0,j=n-1;
          while(i<=j){
              int mid= (i+j)/2;
              if(grid[index][mid]>=0){
                  i=mid+1;
              }else{
                  j=mid-1;
              }
          }
          result+=n-i;
      }  
        return result;
    }
};