#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int result=0;
        int n= colors.size();
        int counter=1;
        for(int i =1;i<(n+k-1);i++){
            if(colors[i%n]!=colors[(i-1+n)%n]){
                counter++;
            }else{
                counter=1;
            }
            if(counter>=k)result++;
            
        }
        return result;
        
    }
};