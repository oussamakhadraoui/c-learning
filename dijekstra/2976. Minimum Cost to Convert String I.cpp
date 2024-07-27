#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int dp[27][27];
    long long dijekstra(char s,char t,vector<pair<int, int>> nodes[27]){
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0,s-'a'});
        vector<long long>minCoast(27,INT_MAX);
        minCoast[s - 'a'] = 0;
        while(pq.size()){
            int cost=pq.top().first;
            int source=pq.top().second;
            pq.pop();
            for(auto&v:nodes[source]){
                int cost2=v.second;
                int nn=v.first;
               
                if(minCoast[nn]>cost+cost2){
                    minCoast[nn]=cost+cost2;
                    pq.push({cost+cost2,nn});
                }
            }
        }
        return minCoast[t-'a'];
    }
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        int n =cost.size();
        vector<pair<int,int>>nodes[27];
        for(int i =0;i<n;i++){
            nodes[original[i]-'a'].push_back({changed[i]-'a',cost[i]});
        }
        long long result=0;
        for(int i =0;i<source.size();i++){
            if(source[i]!=target[i]){
                if(dp[source[i]-'a'][target[i]-'a']!=-1){
                    result+=dp[source[i]-'a'][target[i]-'a'];
                    continue;
                }
                long long di=dijekstra(source[i],target[i],nodes);
                if(di==INT_MAX)return -1;
                dp[source[i]-'a'][target[i]-'a']=di;
                result+=di;
            }
        }
        return result;
    }
};