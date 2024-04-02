 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    int minOperations(int k) {
        if(k==1)return 0;
       int result=INT_MAX;
 
        for(int i =0;i<k;i++){
            int dup=ceil(k*1.0/(1+i))-1;
            result=min(result,dup+i);
        }
        return result;
    }
};