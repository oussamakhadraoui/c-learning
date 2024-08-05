#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string ,int>rec;
        for(int  i =0;i<arr.size();i++)rec[arr[i]]++;
        for(int i =0;i<arr.size();i++){
            if(rec[arr[i]]==1)k--;
            if(k==0)return arr[i];
        }
        return "";
        
    }
};