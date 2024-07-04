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
      ListNode* CreateLinkedList(vector<int>&nums){
          ListNode* result= new ListNode();
          ListNode* clone= result;
          for(int i =0;i<nums.size();i++){
              ListNode* newNode= new ListNode();
              newNode->val=nums[i];
              clone->next=newNode;
              clone=clone->next;
            }
            return result->next;
      }
    
    ListNode* partition(ListNode* head, int x) {
      ListNode* dummy= head;
      vector<int>smallnum;
      vector<int>bigNum;
      while(dummy!=NULL){
          if(dummy->val>=x)bigNum.push_back(dummy->val);
          else smallnum.push_back(dummy->val);
          dummy=dummy->next;
      }
      smallnum.insert( smallnum.end(), bigNum.begin(), bigNum.end() );
      return CreateLinkedList(smallnum);
    }
};