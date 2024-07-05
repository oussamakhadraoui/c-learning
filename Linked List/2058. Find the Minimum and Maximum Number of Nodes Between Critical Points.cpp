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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>node;
        int prev=head->val;
        head=head->next;
        int current;
        int nextVal;
        int mini=INT_MAX;
        int counter=0;
        while(head->next){
            current=head->val;
            nextVal=head->next->val;
            if((current>nextVal&&current>prev)||(current<nextVal&&current<prev)){
                node.push_back(counter);
                int sizo=node.size();
                if(sizo>=2){
                    mini=min(mini,node[sizo-1]-node[sizo-2]);
                }
            }
            prev=current;
            counter++;
            head=head->next;
        }
        int n = node.size();
        if(n==0||n==1)return {-1,-1};
        int maxi=node[n-1]-node[0];
        return {mini,maxi};
    }
};