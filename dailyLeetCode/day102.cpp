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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,ListNode*>rec;
        ListNode* clone = new ListNode(0,head);
        int preSum=0;
        rec[0]=clone;
        while(head!=NULL){
            preSum+=head->val;
            if(rec.find(preSum)!=rec.end()){
                ListNode*start= rec[preSum];
                ListNode*startClone= start->next;
                int clonePreSum=preSum;
                while(startClone!=head){
                    clonePreSum+=startClone->val;
                    rec.erase(clonePreSum);
                    startClone=startClone->next;
                }
                start->next=head->next;      
            }else{
                rec[preSum]=head;
            }
            head=head->next;
        }
        ListNode* result=clone->next;
        delete(clone);
        return result;
        
    }
};