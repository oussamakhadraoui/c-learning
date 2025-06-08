#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
     void dfs(int n ,int start,vector<int>&result){
         if(start>n)return ;
         result.push_back(start);
         for(int i =0;i<=9;i++){
             dfs(n,start*10+i,result);
         }
     }
     vector<int> lexicalOrder(int n) {
         vector<int>result;
         for(int i =1;i<10;i++){
             dfs(n,i,result);
         }
         return result;
     }
 };