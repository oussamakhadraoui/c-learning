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
    ListNode* removeNthFromEnd(ListNode* head, int n) {        
        
        ListNode *dummy= new ListNode(0);
        dummy->next=head;
        ListNode * clone1 =dummy;
        ListNode * clone2 =dummy;
        while(n--){
            clone1=clone1->next;
        }
        while(clone1->next!=NULL){
            clone1=clone1->next;
            clone2=clone2->next;
        }
         ListNode * noUse= clone2->next;
         clone2->next=clone2->next->next;
         
         delete(noUse);
         return dummy->next;
    }
};