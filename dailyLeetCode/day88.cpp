

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
    int maxDepth;
    int val;
    void dfs(TreeNode* root,int n){
        if(root==NULL)return ;
        if(n>maxDepth){
            maxDepth=n;
            val=root->val;
        }
        dfs(root->left,n+1);
        dfs(root->right,n+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        maxDepth=-1;
        val=0;
        dfs(root,0);
        return val;
    }
};