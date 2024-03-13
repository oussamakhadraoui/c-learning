 #include <bits/stdc++.h>
 using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
       int i=1,j=n;
        while(i<=j){
            int mid= (i+j)/2;
            int diff= (mid+1)*mid/2-(mid+n)*(n-mid+1)/2;
            if(diff==0)return mid;
            else if(diff<0){
                i=mid+1;
            }else{
                j=mid-1;
            }
        }
        return -1;
    }
};