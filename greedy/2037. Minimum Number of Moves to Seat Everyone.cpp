#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        vector<int>st(101,0);
        vector<int>se(101,0);
        int n = seats.size();
        for(int i =0;i<n;i++){
            se[seats[i]]++;
            st[students[i]]++;
        }
        int i =0;int j =0;
        int result=0;
        while(true){
            while(i<101&&se[i]==0){
                i++;
            }
            while(j<101&&st[j]==0){
                j++;
            }
            if(i==101||j==101)break;
            result+=abs(j-i);
            st[j]--;
            se[i]--;
        }
        return result;
    }
};