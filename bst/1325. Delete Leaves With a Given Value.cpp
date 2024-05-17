
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
     TreeNode* dfs(TreeNode*clone,int target){
        if(!clone)return NULL;
        clone->left=dfs(clone->left,target);
        clone->right=dfs(clone->right,target);
        if(clone->left==NULL&&clone->right==NULL&&clone->val==target){
            return NULL;
        }
         return clone;
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        return dfs(root,target);
    }
};