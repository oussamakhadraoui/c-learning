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
    void dfs(TreeNode* root,int n,int&ans){
       if(root==NULL)return;
       if(!root->left&&!root->right){
           ans= min(ans,n);
       }
       dfs(root->left,n+1,ans);
       dfs(root->right,n+1,ans);
    }
    int minDepth(TreeNode* root) {
       if(!root)return 0;
       int ans= INT_MAX;
       dfs(root,1,ans);
       return ans;
    }
};