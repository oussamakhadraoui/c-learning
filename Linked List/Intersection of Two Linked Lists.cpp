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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *l1=headA;
        ListNode *l2=headB;
        int len1=0;
        int len2=0;
        while(l1){
            len1++;
            l1=l1->next;
        }      
        while(l2){
            len2++;
            l2=l2->next;
        }
        while(len1>len2){
            len1--;
           headA=headA->next; 
        }
         while(len2>len1){
             len2--;
           headB=headB->next; 
        }
        
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
            
        }
        return headA;
    }
};