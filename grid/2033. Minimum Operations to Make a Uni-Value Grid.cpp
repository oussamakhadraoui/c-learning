#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>rec;
        for(auto&v:grid){
            for(int &w:v)rec.push_back(w);
        }
        int mod= grid[0][0]%x;
        for(int &v:rec)if(v%x!=mod)return -1;
        int result=0;
        sort(rec.begin(),rec.end());
        int mid= rec[rec.size()/2];
        for(int&v:rec)result+=abs(v-mid)/x;
        return result;
    }
};