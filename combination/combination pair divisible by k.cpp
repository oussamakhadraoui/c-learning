#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("a.txt", "r", stdin);
    int n ;
    cin>>n;
    unordered_map<int,int>rec;
    int result=0;
    int k;
    cin>>k;
    vector<int>nums(n);
    for(int i =0;i<n;i++)cin>>nums[i];
    for(int i =0;i<n;i++){
        int v=nums[i]%k;
        rec[v]++;
    }
    result+=rec[0]/2;
    
    for(int i=1;i<=k/2;i++){
        if(i!=k-i){
            result+=min(rec[i],rec[k-i]);
        }else{
            result+=rec[i]/2;
        }
    }
    cout<<result*2<<endl;
    return 0;
}