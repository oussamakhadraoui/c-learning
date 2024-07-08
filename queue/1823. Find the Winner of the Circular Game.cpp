#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>rec;
        for(int i =k+1;i<=n;i++)rec.push(i);
        for(int i=1;i<k;i++)rec.push(i);
        int last=k;
        while(!rec.empty()){
            int time=k-1;
            while(time--){
                int last=rec.front();
                rec.pop();
                rec.push(last);
            }
            last=rec.front();
            rec.pop();
        }
        return last;
        
    }
};