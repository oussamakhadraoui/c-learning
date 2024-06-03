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


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> reverse(int N,int L,int R) {
        vector<int>result;
        for(int i =1;i<L;i++){
          result.push_back(i);
        }
        for(int i =R;i>=L;i--){
          result.push_back(i);
        }
       
        for(int i =R+1;i<=N;i++){
          result.push_back(i);
        }
        return result;
    }

};
int main (){
    int N,M;
    cin>>N >>M;
    vector<int>Maxi(M,0);
    for(int i =0;i<M;i++){
        int x;
        cin>>x;
        Maxi[i]=x;
    }
    vector<int>result(M,0);
    for(int i =0;i<N;i++){
        for(int i =0;i<M;i++){
            int x;
            cin>>x;
            result[i]+=x;
        }
    }
    bool finaly=true;
    for(int i =0;i<M;i++){
        if(result[i]>=Maxi[i])finaly=false;
    }
    if(finaly){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}