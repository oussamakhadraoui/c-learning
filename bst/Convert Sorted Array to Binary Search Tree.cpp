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
    vector<int> nums;
    TreeNode* dfs(int left,int right){
        if(left>right)return NULL;
        int mid= (right+left)/2;
        TreeNode* dummy= new TreeNode(nums[mid]);
        dummy->left = dfs(left,mid-1);
        dummy->right = dfs(mid+1,right);
        return dummy;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        this->nums=nums;
        return dfs(0,nums.size()-1);
    }
};