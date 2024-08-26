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
    void dfs(vector<int>&res,Node*root){
     if(!root)return ;
        for(auto r:root->children){
          dfs(res,r);
            res.push_back(r->val);
}
}
    vector<int> postorder(Node* root) {
        vector<int>res;
        dfs(res,root);
        if(root&&root->val>=0)res.push_back(root->val);
        return res;
        
    }
};