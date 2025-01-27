#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<bool> checkIfPrerequisite(int nums, vector<vector<int>>& pres, vector<vector<int>>& queries) {
        vector<vector<int>>graph(nums);
        vector<int>indegree(nums,0);
        for(auto&pre:pres){
            graph[pre[0]].push_back(pre[1]);
            indegree[pre[1]]++;
        }   
        queue<int>q;
        for(int i =0;i<nums;i++){
            if(indegree[i]==0)q.push(i);
        }
        vector<unordered_set<int>>nodes(nums);
        while(q.size()){
            int node=q.front();
            q.pop();
            for(int adj:graph[node]){
                nodes[adj].insert(node);
                for(int p:nodes[node]){
                    nodes[adj].insert(p);
                }
                indegree[adj]--;
                if(indegree[adj]==0)q.push(adj);
            }
        }
        vector<bool>result;
        for(auto & query:queries){
            result.push_back(nodes[query[1]].count(query[0]));
        }
        return result;
    }
};