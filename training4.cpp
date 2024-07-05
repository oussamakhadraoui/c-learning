#include <bits/stdc++.h>

using namespace std;


// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// class Solution {
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//         vector<int>node;
//         int prev=head->val;
//         head=head->next;
//         int current;
//         int nextVal;
//         int counter=0;
//         while(head->next&&head->next->next){
//             current=head->val;
//             nextVal=head->next->val;
//             if((current>nextVal&&current>prev)||(current<nextVal&&current<prev)){
//                 node.push_back(counter);
//             }
//             prev=current;
//             counter++;
//             head=head->next;
//         }
//         if(node.size()==0)return {-1,-1};
//         int mini=INT_MAX;
//         for(int i =1;i<node.size();i++){
//             mini=min(mini,node[i]-node[i-1]);
//         }
//         int maxi=node[node.size()-1]-node[0];
//         return {mini,maxi};
//     }
// };
//     ListNode* CreateLinkedList(vector<int>&nums){
//           ListNode* result= new ListNode();
//           ListNode* clone= result;
//           for(int i =0;i<nums.size();i++){
//               ListNode* newNode= new ListNode();
//               newNode->val=nums[i];
//               clone->next=newNode;
//               clone=clone->next;
//             }
//             return result->next;
//      }
const int N= 15;
class Solution {
public:
    int dp[N];
    int coinChange(vector<int>& coins, int amount) {

        memset(dp,amount+1,sizeof(dp));
        dp[0]=0;
        for(int i =1;i<=amount;i++){
            for(int &coin:coins){
                if((i-coin)>=0){
                    dp[i]=min(dp[i],1+dp[i-coin]);
                }
            }
        }
        int result= dp[amount];
        return result==amount+1?-1:result;
    }
};
int main(){
    vector<int>vec({2});
  int amount=3;
  Solution().coinChange(vec,amount);
 return 0;
}