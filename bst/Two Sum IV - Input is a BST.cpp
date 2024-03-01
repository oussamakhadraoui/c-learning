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
        nums.push_back(root->val);
        bfs(root->left);
        bfs(root->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
       unordered_map<int,int>occ;
        bfs(root);
        cout<<nums.size()<<endl;
       for(int num:nums){
           int target = k-num;
           
           if(occ[target])return true;
           else occ[num]++;
       }
       return false;
        
    }
};