#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lis(vector<int>&v){
        int n =v.size();
        if(n<=1)return n;
        vector<int>result;
        result.push_back(v[0]);
        for(int i =1;i<n;i++){
            int x= v[i];
            if(x>result.back())result.push_back(x);
            else{
                int index= lower_bound(result.begin(),result.end(),x)-result.begin();
                result[index]=x;
            }
        }
        return result.size();
    }
    int maxPathLength(vector<vector<int>>& c, int k) {
        vector<int>mid=c[k];
        int n = c.size();
        sort(c.begin(),c.end(),[](vector<int>&a,vector<int>&b){
            if(a[0]==b[0])return a[1]>b[1];
            return a[0]<b[0];
        });
        vector<int>prev,next;
        int index=find(c.begin(),c.end(),mid)-c.begin();
        for(int i =0;i<n;i++){
            if(i<index&&c[i][1]<c[index][1])prev.push_back(c[i][1]);
            if(i>index&&c[i][1]>c[index][1])next.push_back(c[i][1]);
        }
        return lis(prev)+1+lis(next);
    }
};