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
   int distributeCoins(TreeNode* root) {
        if(root==nullptr)return 0;
        root->val--;
        int rs = distributeCoins(root->left);
        rs += distributeCoins(root->right);
        if(root->left) root->val+=root->left->val;
        if(root->right) root->val+=root->right->val;
        return abs(root->val) + rs;
    }
};

class Solution {
public:
    int steps;
    pair<int,int>dfs(TreeNode* root){
        if(!root)return {0,0};
        pair<int,int>left;
        pair<int,int>right;
        left=dfs(root->left);
        right=dfs(root->right);
        int coins=right.first+left.first+root->val;
        int sizeOfTree=right.second+left.second+1;
        steps+=abs(coins-sizeOfTree);
        return {coins,sizeOfTree};
    }
    int distributeCoins(TreeNode* root) {
        steps=0;
        dfs(root);
        return steps;
    }
};