#include <bits/stdc++.h>
using namespace std;
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>inner(n+1,0),outer(n+1,0);
        for(auto &pair:trust){
            inner[pair[0]]++;
            outer[pair[1]]++;
        }
        for(int i=1;i<=n;i++){
            if(inner[i]==0&&outer[i]==n-1)return i;
        }
        return -1;
    }
    //T O(2*n)  S O(2*n) 

        int findJudge(int n, vector<vector<int>>& trust) {
        vector<int >inner(n+1,0);
        for(auto &pair:trust){
            inner[pair[0]]--;
            inner[pair[1]]++;
        }
        for(int i=1;i<=n;i++){
            if(inner[i]==n-1)return i;
        }
        return -1;
    }
    //T O(2*n)  S O(n) 