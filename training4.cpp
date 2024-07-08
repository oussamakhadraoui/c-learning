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
class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>rec;
        for(int i =k+1;i<=n;i++)rec.push(i);
        for(int i=1;i<k;i++)rec.push(i);
        int last=k-1;
        while(!rec.empty()){
            int time=k;
            while(time--){
                int last=rec.front();
                rec.pop();
                rec.push(last);
            }
            last=rec.front();
            rec.pop();
        }
        return last;
        
    }
};
int main(){
    int n=6;
    int k =5;
    
    int r=Solution().findTheWinner(n,k);
    return 0;
}