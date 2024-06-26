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
    int dfs(TreeNode* root,int cur){
        if(root==NULL)return 0;
        cur*=10;
        cur+=root->val;
        if(root->left==NULL&&root->right==NULL)return cur;
        return dfs(root->left,cur)+dfs(root->right,cur);
        
        
    }
    int sumNumbers(TreeNode* root) {
        return dfs(root,0);
    }
};