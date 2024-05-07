
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
    ListNode* reverse(ListNode *head){
        ListNode* current=head;
        ListNode* prev=NULL;
        ListNode* next;
        while(current){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        head= reverse(head);
        ListNode* clone= head;
        int rest=0;
        while(clone){
            int v=clone->val*2+rest;
            clone->val=v%10;
            rest=v/10;
            clone=clone->next;
        }
        head= reverse(head);
        if(rest){
            head=new ListNode(rest,head);          
        }
        return head;

    }
};