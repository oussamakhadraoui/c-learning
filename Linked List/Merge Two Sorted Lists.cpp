#include <bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *l3=new ListNode();
        ListNode *dummy=l3;
        
        while(list1&&list2){
            if(list1->val>=list2->val){
                dummy->next=list2;
                list2=list2->next;
            }else{
                 dummy->next=list1;
                 list1=list1->next;
            }
            dummy=dummy->next;
        }
        if(!list1)
            dummy -> next = list2;
        else
            dummy -> next = list1;
        return l3->next;
    }
};