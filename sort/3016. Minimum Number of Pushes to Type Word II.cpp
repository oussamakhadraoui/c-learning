
#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    static bool comp(pair<char, int> a, pair<char, int> b){
        return a.second>b.second;
    }
    int minimumPushes(string word) {
        unordered_map<char, int> countChar;
        for(const char& c: word)
            countChar[c]++;
        vector<pair<char, int>> vp(countChar.begin(), countChar.end());
        sort(vp.begin(), vp.end(), comp);
        int total=0;
        for(int i=0;i<vp.size();i++)
            total+=vp[i].second*(i/8+1);
        return total;
    }
};
