#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class DSU{
    public:
    vector<ll>rank,parent;
    DSU(ll n){
        parent.resize(n,0);
        rank.resize(n),0;
        for(ll i=0;i<n;i++)parent[i]=i;
    }
    ll find(ll x){
        return parent[x]= parent[x]==x?x:find(parent[x]);
    }
    bool Union(ll x ,ll y){
        ll parentX=find(x);
        ll parentY=find(y);
        if(parentX!=parentY){
            rank[parentX]<rank[parentY]?parent[parentX]=parentY:parent[parentY]=parentX;
            rank[parentX]+=rank[parentX]==rank[parentY];
            return true;
        }
        return false;
    }
};
class Solution {
public:
    vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& edgeList, vector<vector<int>>& queries) {
        DSU dsu(n);
        for(int i =0;i<queries.size();i++){
            queries[i].push_back(i);
        }
        sort(queries.begin(),queries.end(),[](vector<int>&a,vector<int>&b){
            return a[2]<b[2];
        });
        sort(edgeList.begin(),edgeList.end(),[](vector<int>&a,vector<int>&b){
            return a[2]<b[2];
        });
        int start=0;
        vector<bool>result(queries.size());
        for(auto &q:queries){
            while(start<edgeList.size()&&edgeList[start][2]<q[2]){
                dsu.Union(edgeList[start][0],edgeList[start][1]);
                start++;
            }
            if(dsu.find(q[0])==dsu.find(q[1])){
                result[q[3]]=true;
            }
        }
        return result;

    }
};