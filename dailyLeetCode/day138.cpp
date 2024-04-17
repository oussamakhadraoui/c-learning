
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
    vector<string>words;
    void bfs(TreeNode* root,string s){
        if(root==NULL)return ;
        s+=char('a'+root->val);
        if(root->left==NULL&&root->right==NULL){
            reverse(s.begin(),s.end());
            words.push_back(s);
        }
        bfs(root->left,s);
        bfs(root->right,s);
        
    }
    string smallestFromLeaf(TreeNode* root) {
        
        bfs(root,"");
        sort(words.begin(),words.end());
        
        return words[0];
    }
};