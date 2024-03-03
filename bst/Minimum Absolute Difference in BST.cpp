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
    void bfs(TreeNode*root){
        if(root==NULL)return;
        bfs(root->left);
        nums.push_back(root->val);
        bfs(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        bfs(root);
        int result=INT_MAX;
        for(int i=1;i<nums.size();i++){
            result= min(result,abs(nums[i]-nums[i-1]));
        }
        return result;  
    }
};