
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
    
    void bfs(TreeNode* root, int val, int depth,int lvl){
        if(root==NULL)return;
        if(depth-1==lvl){
            root->left=new TreeNode(val,root->left,NULL);
            root->right=new TreeNode(val,NULL,root->right);
            return;
        }
        
        
        bfs(root->left,val,depth,lvl+1);
        bfs(root->right,val,depth,lvl+1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
      if(depth ==1){
          TreeNode* clone=new TreeNode(val,root,NULL);
          return clone;
      }  
      bfs(root,val,depth,1);
      return root;
    }
};