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
    void inordered_traversal(TreeNode* root,vector<int>&vec){
        if(!root)return ;
        inordered_traversal(root->left,vec);
        vec.push_back(root->val);
        inordered_traversal(root->right,vec);
    }
    TreeNode* solve(vector<int>&vec,int i ,int j ){
        if(i>j)return NULL;
        int mid=(i+j)/2;
        TreeNode* result=new TreeNode(vec[mid]);
        result->left=solve(vec,i,mid-1);
        result->right=solve(vec,mid+1,j);       
        return result;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>sortedNum;
        inordered_traversal(root,sortedNum);
        
        int n = sortedNum.size()-1;     

        return solve(sortedNum,0,n);;
    }
};