#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isOk(int n,int mid, vector<int>& quantities){
        int result=0;
        for(int& q:quantities){
            result+=(q/mid);
            if(q%mid)result++;
        }
        return result>n;   
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int i =1;
        int j = 1e5+1;
        int sum=0;
        while(i<j){
            int mid=(i+j)>>1;
            if(isOk(n,mid,quantities)){
                i=mid+1;
            }else{
                j=mid;
            }
        }
        return i;
    }
};