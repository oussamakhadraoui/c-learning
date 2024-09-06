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
    void bfs(TreeNode* root,vector<vector<int>>&result){
        if(!root)return ;
        queue<TreeNode *>q;
        if(root->left)q.push(root->left);
        if(root->right)q.push(root->right);
        bool leftToRight=0;
        while(q.size()){
            int time=q.size();
            vector<int>num(time);
            for(int i =0;i<time;i++){
                TreeNode*top=q.front();
                q.pop();
                int index = leftToRight ? i : time - 1 - i;
                num[index] = top->val;
                if(top->left)q.push(top->left);
                if(top->right)q.push(top->right);
            }
            result.push_back(num);
            leftToRight^=1;
        }
        
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root){
            result.push_back({root->val});
        }
        bfs(root,result);
        return result;
    }
};