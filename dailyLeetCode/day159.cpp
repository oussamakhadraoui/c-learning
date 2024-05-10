#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<int,int>>stack;
        int n = arr.size();
        for(int i =0;i<n;i++){
            for(int j=i+1;j<n;j++){
                stack.push_back({arr[i],arr[j]});
            }
        }
        sort(stack.begin(),stack.end(),[&](pair<int,int>&i,pair<int,int>&j){
            return i.first*j.second<i.second*j.first;
        });
        vector<int> result;
        for(auto& st:stack){
            if(!(k-1)){
                result.push_back(st.first);
                result.push_back(st.second);
                break;
            }
            k--;

        }
        return result;
        
    }
};