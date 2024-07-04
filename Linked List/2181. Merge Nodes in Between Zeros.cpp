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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* clone1= head;
        ListNode* clone2= head->next;
        int res=0;
        while(clone2!=NULL){
            res+=clone2->val;
            if(clone2->val==0){
                clone1->next=new ListNode(res);
                res=0;
                clone1=clone1->next;
            }
            clone2=clone2->next;
        }    
        delete(clone2);
        return head->next;
    }
};