#include <bits/stdc++.h>
 
using namespace std;
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n%groupSize>0)return false;
        map<int,int>rec;
        for(int& h:hand)rec[h]++;
        int numberOfgroups=n/groupSize;
        while(numberOfgroups--){ 
            int firstElement=rec.begin()->first;
            for(int i=firstElement;i<firstElement+groupSize;i++){
                if(rec[i]){
                    rec[i]--;
                    if(rec[i]==0)rec.erase(i);
                }
                else return false;
            }
        }
        return true;
    }
};