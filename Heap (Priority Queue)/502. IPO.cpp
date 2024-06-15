#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = capital.size();
        priority_queue<int>pq;
        vector<pair<int,int>>couple;
        for(int i=0;i<n;i++){
            couple.push_back({capital[i],profits[i]});
        }
        int i =0;
        sort(couple.begin(),couple.end());
        while(k--){
            while(i <n){
                if(w<couple[i].first)break;
                if(w>=couple[i].first)pq.push(couple[i].second);
                i++;
            }
            if(pq.empty())break;
            w+=pq.top();
            pq.pop();
        }
        return w;
    }
};