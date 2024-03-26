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
   
    // int numSubarraysWithSum(vector<int>& nums, int goal) {
    //     unordered_map<int,int>rec;
    //     rec[0]=1;
    //     int result=0,prefixSum=0;
        
    //     for(int num:nums){
    //         prefixSum+=num;
    //         if(rec.find(prefixSum-goal)!=rec.end()){
    //             result+=rec[prefixSum-goal];
    //         }
    //         rec[num]++;
    //     } 
    //     return result;
    // }

    // int main (){
    //  vector<int>arr({1,0,1,0,1});
    //  int goal = 2;
    //  int x= numSubarraysWithSum(arr,goal);
    //  cout<<x<<endl;
    //  return 0;
    // }

#include <bits/stdc++.h>

using namespace std;

// void solve() {
//     int n;
//     cin >> n; 
//     int x;
//     cin >> x;
//     int sum=0;
//     int result=0;
//     while(n--) {
//         int input;
//         cin>>input;
//         sum+=input;
//         if(input>x)result=-1;
//     }

//     if(result==-1){
//         cout<<-1<<endl;
//     }else{
//         result=sum/x;
//         if(sum%x>0){
//             result++;
//         }
//         cout<<result<<endl;;
//     }  
// }

void solve(){
    int x,y,z;
    unordered_map<string,pair<int,int>>modules;
    while(x--){
        string x;
        int cap;
        int index;
        cin>>x>>cap>>index;
        modules[x]={index,cap};
    }
    unordered_map<int,pair<int,int>>viruss;
    while(y--){
    int x;
    int index;
    int cap=0;
    cin>>x;
    cin>>index;
    viruss[x]={index,cap};
    }
    sort(viruss.begin(), viruss.end(),
        [] (const auto& lhs, const auto& rhs) {
    return lhs.first < rhs.first;
    });
    sort(modules.begin(), modules.end(),
        [] (const auto& lhs, const auto& rhs) {
    return lhs.first < rhs.first;
    });


    while(z--){
        int virus;
        string moduleName;
        int cap;
        cin>>virus;
        cin>>moduleName;
        cin>>cap;
        if(viruss[virus].first<modules[moduleName].first){
            if(modules[moduleName].second>cap){
                cap=0;
                modules[moduleName].second-=cap;
            }else{
                cap-=modules[moduleName].second;
                modules[moduleName].second=0;
        }
            viruss[virus].second=cap;
        };
        
    };
    int b=0;
    string s="";
    unordered_map<string,pair<int,int>>::iterator it;
    for (it = modules.begin(); it != modules.end(); it++)
        if(it->second.second>0){
            s+=it->first;
            b++;
        }
    cout<<x<<endl;
    cout<<s<<endl;
}
    
    


int main() {
    solve();
    return 0;
}


// OODOOD
// odoo

// 5 1
// 1 1 1 1 1


// 5 3 7
// P 5 0
// T 1 70
// To 80 4
// Ti 10 10
// E  2 40
// 1 15
// 2 50
// 3 60
// 1 T 100
// 1 E 200
// 2 to 84
// 2 P 4
// 3 E 4
// 3 To 50
// 3 P 2