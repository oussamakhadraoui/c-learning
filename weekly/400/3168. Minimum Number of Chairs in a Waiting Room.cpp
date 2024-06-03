#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int minimumChairs(string s) {
        int maxi=0;
        int counter=0;
        for(char &c:s){
            if(c=='E'){
                counter++;
                maxi=max(maxi,counter);
            }else{
                counter--;
                maxi=max(maxi,counter) ;               
            }
        }
        return maxi;
    }
};