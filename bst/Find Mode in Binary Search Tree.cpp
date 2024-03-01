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

    unordered_map<int ,int>occ;
    void dfs(TreeNode* root){
       if(root==NULL)return;
       occ[root->val]++;
        dfs(root->left);
        dfs(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        vector<int>result;
        int Max=INT_MIN;
        for(auto pair:occ){
            if(pair.second>=Max)Max=pair.second;
        }
         for(auto pair:occ){
           if(pair.second==Max)result.push_back(pair.first);
        }    
        return result;
        
    }
};