#include <bits/stdc++.h>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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
int main(){
 vector<int>nums{1,2,3,4};
 ListNode* oussama = CreateLinkedList(nums);
 cout<<oussama->next->next->next->next->val<<endl;
 return 0;
}