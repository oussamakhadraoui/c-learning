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
    vector<int>nums;
    void bfs(TreeNode* root){
        if(root==NULL)return; 
        bfs(root->left);
        nums.push_back(root->val);
        bfs(root->right);
       
    }
    TreeNode* increasingBST(TreeNode* root) {
        bfs(root);
        sort(nums.begin(),nums.end());
        TreeNode*result=new TreeNode(0);
        TreeNode*clone=result;
        int n = nums.size()-1;
        for(int i=0;i<=n;i++){
            TreeNode*righter=new TreeNode(nums[i]);
            clone->right=righter;
            clone->left=NULL;
            if(i!=n)clone=clone->right;
        }
        return result->right;
    }
};