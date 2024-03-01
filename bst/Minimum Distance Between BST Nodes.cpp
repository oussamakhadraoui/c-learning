#include <bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
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
    int minDiffInBST(TreeNode* root) {
        bfs(root);
        int result=INT_MAX;
        for(int i=1;i<nums.size();i++){
            result= min(result,nums[i]-nums[i-1]);
        }
        return result;
    }
};