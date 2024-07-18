

#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    int result;
    int dis;
    vector<int>dfs(TreeNode* root){
        if(!root)return {};
        if(!root->left&&!root->right)return {1}; 
        vector<int>lefto=dfs(root->left);
        vector<int>righto=dfs(root->right);
        vector<int>parent;

        for(int & l:lefto){
            if((l+1)<=dis)parent.push_back(l+1);
        }
        for(int & r:righto){
            if((r+1)<=dis)parent.push_back(r+1);
        }
        for(int & l:lefto){ 
            for(int & r:righto){
                if((l+r)<=dis)result++;
            }
        }
        return parent;
    }
    int countPairs(TreeNode* root, int distance) {
        this->dis=distance;
        result=0;
        dfs(root);
        return result;
    }
};