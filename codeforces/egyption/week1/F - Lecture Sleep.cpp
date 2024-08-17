#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int n ;
    cin>>n;
    unordered_map<int,int>rec;
    int result=0;
    int k;
    cin>>k;
    vector<int>nums(n);
    vector<int>go(n);
    for(int i =0;i<n;i++)cin>>nums[i];
    for(int i =0;i<n;i++)cin>>go[i];
    for(int i =0;i<n;i++){
        if(go[i])result+=nums[i];
    }
    vector<int>prefix(n);
    go[0]==0?prefix[0]=nums[0]:prefix[0]=0;
  
    for(int i=1;i<n;i++){
        go[i]==0?prefix[i]=prefix[i-1]+nums[i]:prefix[i]=prefix[i-1];
       
    }
    int maxi=prefix[k-1];
    for(int i=1;i<=(n-k);i++){
        maxi=max(maxi,prefix[i+k-1]-prefix[i-1]);
    }
    result+=maxi;
    cout<<result<<endl;
    return 0;
}