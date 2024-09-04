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

// void solve(){
//     int x,y,z;
//     unordered_map<string,pair<int,int>>modules;
//     while(x--){
//         string x;
//         int cap;
//         int index;
//         cin>>x>>cap>>index;
//         modules[x]={index,cap};
//     }
//     unordered_map<int,pair<int,int>>viruss;
//     while(y--){
//     int x;
//     int index;
//     int cap=0;
//     cin>>x;
//     cin>>index;
//     viruss[x]={index,cap};
//     }
//     sort(viruss.begin(), viruss.end(),
//         [] (const auto& lhs, const auto& rhs) {
//     return lhs.first < rhs.first;
//     });
//     sort(modules.begin(), modules.end(),
//         [] (const auto& lhs, const auto& rhs) {
//     return lhs.first < rhs.first;
//     });


//     while(z--){
//         int virus;
//         string moduleName;
//         int cap;
//         cin>>virus;
//         cin>>moduleName;
//         cin>>cap;
//         if(viruss[virus].first<modules[moduleName].first){
//             if(modules[moduleName].second>cap){
//                 cap=0;
//                 modules[moduleName].second-=cap;
//             }else{
//                 cap-=modules[moduleName].second;
//                 modules[moduleName].second=0;
//         }
//             viruss[virus].second=cap;
//         };
        
//     };
//     int b=0;
//     string s="";
//     unordered_map<string,pair<int,int>>::iterator it;
//     for (it = modules.begin(); it != modules.end(); it++)
//         if(it->second.second>0){
//             s+=it->first;
//             b++;
//         }
//     cout<<x<<endl;
//     cout<<s<<endl;
// }
    
    


// int main() {
//     solve();
//     return 0;
// }


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


// vector<vector<int>>boys;
// vector<vector<int>>girls;
// bool visGirls[50];
// bool boysVis[50];
// double dfsBoys(int holder,int size){
//     boysVis[holder]=1;
//     pair<double,int> distance={0,-1};
//     for(int j=0;j<size;j++){
//         if(boysVis[j])continue;
//         int dis=pow(boys[holder][0]-boys[j][0],2)+pow(boys[holder][1]-boys[j][1],2);
//         if(dis>=distance.first){
//             distance={dis,j};
//         }
//     }
//     if(distance.second==-1)return 0;
//     return sqrt(distance.first)+dfsBoys(distance.second,size);
// }
// double dfsGirls(int holder,int size){
//     visGirls[holder]=1;
//     pair<double,int> distance={0,-1};
//     for(int j=0;j<size;j++){
//         if(visGirls[j])continue;
//         int dis=pow(girls[holder][0]-girls[j][0],2)+pow(girls[holder][1]-girls[j][1],2);
//         if(dis>=distance.first){
//             distance={dis,j};
//         }
//     }
//     if(distance.second==-1)return 0;
//     return sqrt(distance.first)+dfsGirls(distance.second,size);
// }


// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// map <string,vector<string> > M;
// vector <string> V;
// vector <string> names;
// vector <string> stac;
// string code;
// void dfsPrint(string name){
//     cout<<name<<'\n';
//     vector<string> helper = M[name];
//     for(int i =0 ;i<helper.size();++i){
//         code+='0';
//         dfsPrint(helper[i]);
//     }
//     code+='1';
// }
 
// int main() {
//     freopen("a.txt","r",stdin);
//     string typ;
//     string szef;
//     string name;
//     string ceo = "";
//     int j;
//     cin>>typ;
//     if(typ=="ENCODE"){
//         while(cin>>name){
//             if(name[name.size()-1]==':'){
//                 szef= "";
//                 for(int i =0 ;i<name.size()-1;++i){
//                     szef+=name[i];
//                 }
//                 if(ceo==""){
//                     ceo=szef;
//                 }          
//             }
//             else{
//                 M[szef].push_back(name);
//             }
//         }
//         dfsPrint(ceo);
//         cout<<code<<'\n';
//     }
//     else{
//         while(cin>>name){
//             V.push_back(name);
//         }
//         code = V[V.size()-1];
//         V.pop_back();
//         stac.push_back(V[0]);
//         j=0;
//         for(int i =1;i<V.size();++i){
//             if(code[j]=='0'){
//                 M[stac[stac.size()-1]].push_back(V[i]);
//                 stac.push_back(V[i]);
//                 ++j;
//             }
//             else{
//                 while(code[j]=='1'){
//                     ++j;
//                     stac.pop_back();
//                 }
//                 M[stac[stac.size()-1]].push_back(V[i]);
//                 stac.push_back(V[i]);
//                 ++j;
//             }
//         }
//         for(int i =0;i<V.size();++i){
//             names=M[V[i]];
            
//             if(names.size()!=0){
//                 cout<<V[i]<<": ";
//                 for(int q=0;q<names.size();++q){
//                     cout<<names[q]<<' ';
//                 }  
//                 cout<<'\n'; 
//             }
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;
// int main (){
//     freopen("a.txt","r",stdin);
//     int t;
//     cin>>t;
//     while(t--){

//         int n,fav,remove;
//         cin>>n>>fav>>remove;
//         vector<int>num;
//         unordered_map<int,int>occ;
//         for(int i =0;i<n;i++){
//             int v;
//             cin>>v;
//             num.push_back(v);
//             occ[v]++;
//         }
//         int favo=num[fav-1];
//         int comp=occ[favo];
//         sort(num.rbegin(),num.rend());
//         for(int i =0;i<remove;i++){
//             occ[num[i]]--;
//         }
//         if(occ[favo]==0)cout<<"YES"<<endl;
//         else if(occ[favo]==comp)cout<<"NO"<<endl;
//         else if(occ[favo]<comp)cout<<"MAYBE"<<endl;
        
//         occ.clear();
//         num.clear();
//     }
//     return 0;
// }

const int N= 1e4+1;
class Solution {
public:
    int maxScore(vector<vector<int>>& grid) {
        int result = 0;
        vector<pair<int, int>> nums;
        
        // Collect all the elements in grid along with their row indices
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                nums.push_back({grid[i][j], i});
            }
        }

        sort(nums.rbegin(), nums.rend());

        unordered_set<int> selectedRows;
        unordered_set<int> usedValues;
        
        for (auto& [value, row] : nums) {

            if (selectedRows.find(row) == selectedRows.end() && usedValues.find(value) == usedValues.end()) {
                result += value;
                selectedRows.insert(row);
                usedValues.insert(value);
            }


        }
        
        return result;
    }
};
int main (){
    vector<vector<int>>n={{19,18},{1,14},{4,14}};
    vector<double> d={0.5,0.5,0.2};
    vector<int>damage ={80,79};
    vector<int>health ={86,13};
    int k = 6;
    double x= Solution().maxScore(n);
    cout<<x<<endl;
    return 0;
}