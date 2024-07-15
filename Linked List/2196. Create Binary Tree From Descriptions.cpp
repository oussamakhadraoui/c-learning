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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*>result;
        unordered_map<int,bool>parents;
        for(auto&desc:descriptions){
            int left=desc[2],child=desc[1],parent=desc[0];
            parents[child]=true;
            TreeNode* childTree =new TreeNode(child),*parentTree=new TreeNode(parent);
            
            if(result.find(parent)!=result.end())parentTree=result[parent];
            if(result.find(child)!=result.end())childTree=result[child];
            
            if(left)parentTree->left=childTree;
            else parentTree->right=childTree;
            
            result[parent]=parentTree;
            result[child]=childTree;
        }
        int parent;
        for(auto& [f,s]:result){
            if(!parents[f])parent=f;
        }
        return result[parent];
    }
};