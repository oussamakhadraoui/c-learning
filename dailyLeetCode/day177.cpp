#include <bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     int countTriplets(vector<int>& arr) {
//         int n =arr.size();
//         int a=0,b=0,result=0;
//         for(int i =0;i<n;i++){
//             a=0;
//             for(int j=i+1;j<n;j++){
//                 a^=arr[j-1];
//                 b=0;
//                 for(int k=j;k<n;k++){
//                     b^=arr[k];
//                     if(a==b)result++;
//                 }
//             }
//         }
//         return result;
//     }
// };
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n =arr.size();
        vector<int>rec(n+1,0);
        int a =0;
        int result=0;
        for(int i =0;i<n;i++)rec[i+1]=rec[i]^arr[i];
        for(int i =0;i<n;i++){
            for(int k=i+1;k<=n;k++){
                if(rec[i]==rec[k])result+=k-(i+1);
            }
        }
        return result;
    }
};