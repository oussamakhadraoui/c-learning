#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    int result;
    void dfs(Node* root,int count){
        if(!root)return;
        count++;
        result=max(count,result);
        for(int i =0;i<root->children.size();i++){
            dfs(root->children[i],count);
        }
    };
    int maxDepth(Node* root) {
        result=0;
        dfs(root,0);
        return result;
    }
};