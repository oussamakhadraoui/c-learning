#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n= timePoints.size();
        vector<int>rec;
        for(string &s:timePoints){
            int hh= stoi(s.substr(0,3));
            int min=stoi(s.substr(3));
            int to_add=hh*60+min;
            rec.push_back(to_add);
        }
        sort(rec.begin(),rec.end());
        int result=INT_MAX;
        for(int i =1;i<rec.size();i++){
            result=min(rec[i]-rec[i-1],result);
        }
        int lastDiff=1440-rec[rec.size()-1]+rec[0];
        result=min(lastDiff,result);
        return result;
    }
};