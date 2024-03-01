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