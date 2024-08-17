#include <bits/stdc++.h>
using namespace std;
int main() {
 
    string s;
    cin>>s;
    int n =s.size();
    vector<int>nums(n,0);
    for(int i =1;i<n;i++){
        nums[i]=nums[i-1];
        if(s[i]==s[i-1])nums[i]++;
    }
    int m ;
    cin>>m;
    while(m--){
        int l,r;
        cin>>l>>r;
        int result=nums[r-1]-nums[l-1];
        cout<<result<<endl;
    }
    
    return 0;
}