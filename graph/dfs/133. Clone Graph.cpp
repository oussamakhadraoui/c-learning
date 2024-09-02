#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};


class Solution {
public:
    Node* dfs(Node* node,unordered_map<Node*,Node*>&rec){
        if(!node)return nullptr;
        if(rec[node])return rec[node];
        Node* clone= new Node(node->val);
        rec[node]=clone;
        for(auto &x:node->neighbors){
            clone->neighbors.push_back(dfs(x,rec));
        }
        return clone;
    }
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*>rec;
        return dfs(node,rec);
    }
};