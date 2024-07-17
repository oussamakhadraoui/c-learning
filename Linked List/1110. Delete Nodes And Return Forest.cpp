#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    vector<TreeNode*>result;
    
    void dfs(TreeNode* root,unordered_map<int,int>&num ,bool isParent){
        if(root==NULL)return;
        if(num[root->val]){
            dfs(root->left,num,true);
            dfs(root->right,num,true);
        }else{
            if(isParent)result.push_back(root);
            TreeNode* lefto=root->left;
            TreeNode* righto=root->right;
            if(lefto&&num[lefto->val]){
                root->left=NULL;
            }
            if(righto&&num[righto->val]){
                root->right=NULL;
            }
            dfs(lefto,num,false);
            dfs(righto,num,false);            
        }

    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_map<int,int>num;
        
        for(int & del:to_delete)num[del]=1;
        dfs(root,num,true);
        
        return result;
    }
};