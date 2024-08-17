#include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin>>n;
    int k;
    cin>>k;
    vector<int>nums(n);
    for(int i =0;i<n;i++)cin>>nums[i];
    for(int i =1;i<n;i++)nums[i]+=nums[i-1];
    int sum=nums[k-1];
    int index=0;
    for(int i =1;i<=(n-k);i++){
        int pre=nums[i+k-1]-nums[i-1];
        if(pre<sum){
            sum=pre;
            index=i;
        }
    }
    cout<<index+1<<endl;
    return 0;
}