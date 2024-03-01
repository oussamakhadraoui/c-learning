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