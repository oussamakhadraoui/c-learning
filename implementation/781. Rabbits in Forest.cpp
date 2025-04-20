#include <bits/stdc++.h>
 
using namespace std;
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>rec;
        int n = answers.size();
        int result=0;
        for(int i =0;i<n;i++)rec[answers[i]]++;
        for(auto &[key,val]:rec){
            result+=ceil((double)val/(key+1))*(key+1);
        }
        return result;
    }
};