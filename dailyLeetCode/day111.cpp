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
    bool isPalindrome(ListNode* head) {
        vector<int>occ;
        while(head!=NULL){
            occ.push_back(head->val);
            head=head->next;
        }
        int i=0;
        int j=occ.size()-1;
        while(j>i){
            if(occ[i]!=occ[j])return false;
            i++;j--;
        }
        return true;
        
    }
};