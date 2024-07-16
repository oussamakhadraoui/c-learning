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
    string track;
    void dfs(TreeNode* root, int startValue,string &trackS){
        if(root==NULL)return;
        if(root->val==startValue)track=trackS;
        trackS.push_back('L');
        dfs(root->left,startValue,trackS);
        trackS.pop_back();
        trackS.push_back('R');
        dfs(root->right,startValue,trackS);
        trackS.pop_back();
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        track="";
        string start="";
        string end="";
        TreeNode* clone=root;
        string trackS="";string trackE="";
        dfs(root,startValue,trackS);
        start=track;
        track="";
        dfs(clone,destValue,trackE);
        end=track;
        int i=0;
        while(i<start.size()&&i<end.size()&&start[i]==end[i])i++;
        string s(start.size() - i, 'U');
        string e(end.begin()  + i, end.end());
        return s+e;
    }
};