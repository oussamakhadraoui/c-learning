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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int length=0;
        ListNode* clone=head;
        while(clone){
            length++;
            clone=clone->next;
        }
        int rest=length%k;
        int numItem=length/k;
        vector<ListNode*>result(k,NULL);
        for(int i=0;i<k;i++){
            if(!head)break;
            result[i]=head;
            int numberOfElement=numItem+(rest>i?1:0)-1;
           
            while(numberOfElement--){
                head=head->next;
            }
            ListNode* Next=head->next;
            head->next=NULL;
            head=Next;
        }
        return result;
    }
};