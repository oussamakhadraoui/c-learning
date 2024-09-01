 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        auto getColor = [](string coordinate) {
            int col = coordinate[0] - 'a' + 1; 
            int row = coordinate[1] - '0';     
            return (col + row) % 2;            
        };

    
        return getColor(coordinate1) == getColor(coordinate2);
    }
};