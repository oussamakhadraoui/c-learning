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
    int result;
    vector<int> dfs(TreeNode* root){
        if(!root)return {0,0};
        vector<int>left=dfs(root->left);
        vector<int>right=dfs(root->right);
        int sum=root->val+left[0]+right[0];
        int count=1+left[1]+right[1];
        if((sum/count)==root->val)result++;
        return {sum,count};
    }
    int averageOfSubtree(TreeNode* root) {
        result=0;
        dfs(root);
        return result;
    }
};