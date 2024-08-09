#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int n, m;
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        this->n = grid.size();
        this->m = grid[0].size();
        if (n < 3 || m < 3) return 0;
        int countLineX = 15;
        int countLineY = 15;
        int result = 0;
        for (int countX = 0; countX <= n - 3; ++countX) {
            for (int countY = 0; countY <= m - 3; ++countY) {   
                int count = 0;
                bool isOk = true;
                for (int i = countX; i < countX + 3; i++) {
                    int countRow = 0;
                    for (int j = countY; j < countY + 3; j++) {
                        if (grid[i][j] >= 1 && grid[i][j] <= 9) {
                            count += grid[i][j];
                            countRow += grid[i][j];
                        } else {
                            isOk = false;
                            break;
                        }
                    }
                    if (countRow != countLineY) {
                        isOk = false;
                        break;
                    }
                }
                if (isOk) {
                    for (int j = countY; j < countY + 3; j++) {
                        int countCol = 0;
                        for (int i = countX; i < countX + 3; i++) {
                            countCol += grid[i][j];
                        }
                        if (countCol != countLineX) {
                            isOk = false;
                            break;
                        }
                    }
                }
                int di1 = grid[countX][countY]+grid[countX+1][countY+ 1] + grid[countX + 2][countY + 2];
                int di2=grid[countX][countY+2]+grid[countX+1][countY+1]+grid[countX+2][countY];
                if(grid[countX][countY]!=grid[countX+1][countY+1]&&isOk&&count==45&&di1==15&&di2==15){
                    result++;
                }
            }
        }
        return result;
    }
};