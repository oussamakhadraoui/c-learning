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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*clone =list1;
        int count=0;
        while(count!=a-1){
            count++;
            clone=clone->next;
        }
        ListNode *clone2=clone->next;
        
        //deleting extra space
        while(count!=b-1){
           // ListNode *toDelete=clone2;     
           clone2=clone2->next;
           // delete(toDelete);
           count++;
        }
        while(list2){
            clone->next=list2;
            list2=list2->next;
            clone=clone->next;
        }
        clone->next=clone2->next;
        return list1;
    }
};