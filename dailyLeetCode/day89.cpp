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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode> q;
        q.push(*root);
        for(int level = 0, sz = 1; !q.empty(); sz = q.size(), level++) {
            int last;
            if (level%2) last = 1e9;
            else last = -1e9+1;
            while(sz--) {
                TreeNode u = q.front();
                q.pop();
                if (u.val%2 == level%2) return false;
                if (level%2 && last <= u.val) return false;
                else if (!(level%2) && last >= u.val) return false;
                if (u.left) 
                    q.push(*u.left);
                if (u.right) 
                    q.push(*u.right);
                last = u.val;
            }
        }
        return true;
    }
};