// #include <bits/stdc++.h>
// using namespace std;
// struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// ListNode* CreateLinkedList(vector<int>&nums){
//   ListNode* result= new ListNode();
//   ListNode* clone= result;
//   for(int i =0;i<nums.size();i++){
//    ListNode* newNode= new ListNode();
//    newNode->val=nums[i];
//    clone->next=newNode;
//    clone=clone->next;
//   }
//  return result->next;
// }
// int main(){
//  vector<int>nums{1,2,3,4};
//  ListNode* oussama = CreateLinkedList(nums);
//  cout<<oussama->next->next->next->next->val<<endl;
//  return 0;
// }

    #include <bits/stdc++.h>
using namespace std; 
   
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>rec;
        rec[0]=1;
        int result=0,prefixSum=0;
        
        for(int num:nums){
            prefixSum+=num;
            if(rec.find(prefixSum-goal)!=rec.end()){
                result+=rec[prefixSum-goal];
            }
            rec[num]++;
        } 
        return result;
    }

    int main (){
     vector<int>arr({1,0,1,0,1});
     int goal = 2;
     int x= numSubarraysWithSum(arr,goal);
     cout<<x<<endl;
     return 0;
    }