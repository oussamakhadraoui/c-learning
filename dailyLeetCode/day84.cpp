#include<bits/stdc++.h>
using namespace std;
class DisjointSet{
    vector<int> parent;
    vector<int> size;

    public:
    DisjointSet(int n){
        parent.resize(n+1);
        size.resize(n+1);

        for(int i=0;i<=n;i++){
            parent[i]=i;
            size[i]=1;
        }
    }
    
    int findUParent(int node){
        if(node==parent[node]) return node;
        return parent[node]=findUParent(parent[node]);
    }
    void Reset(int x){
        parent[x]=x;
    }
    void unionBySize(int u, int v){
        int ulp_u=findUParent(u);
        int ulp_v=findUParent(v);
        
        if(ulp_u==ulp_v) return;
        if(size[ulp_u]<size[ulp_v]){
            parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
        }else{
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
    }
};
class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        auto compare=[](vector<int>&x,vector<int>&y){
            if(x[2]==y[2]){
                return x[0]<y[0];
            }else{
                return x[2]<y[2];
            }
        };
        sort(meetings.begin(),meetings.end(),compare);
        DisjointSet dsu(n);
        dsu.unionBySize(0,firstPerson);
        for(int i =0;i<meetings.size();){
            int target = meetings[i][2];
            vector<int>peoples;
            while(i<meetings.size()&&meetings[i][2]==target){
                dsu.unionBySize(meetings[i][0],meetings[i][1]);
                peoples.push_back(meetings[i][0]);
                peoples.push_back(meetings[i][1]);
                i++;
            }
            for(auto & people:peoples){
                if(dsu.findUParent(people)!=dsu.findUParent(0)){
                    dsu.Reset(people);
                }
            }
        }
        vector<int>result;
        for(int i=0;i<n;i++){
             if(dsu.findUParent(i)==dsu.findUParent(0))result.push_back(i);
        }
        return result;
    }
};