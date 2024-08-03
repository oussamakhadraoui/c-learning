 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>rec;
        if(target.size()!=arr.size())return false;
        for(int &ar:arr)rec[ar]++;
        for(int &t:target){
            if(rec[t])rec[t]--;
            else return false;
        }
        return true;
    }
};