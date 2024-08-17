#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int n,k ;
    cin>>n>>k;
    unordered_map<int,int>rec;
    vector<int>prefix(n);
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        int v;
        cin>>v;
        nums[i]=v;
        rec[v]++;
    }
    prefix[0]=rec.size();
    for(int i=1;i<n;i++){
        rec[nums[i-1]]--;
        if(rec[nums[i-1]]==0)rec.erase(nums[i-1]);
        prefix[i]=rec.size();
    }
    for(int i =0;i<k;i++){
        int v;
        cin>>v;
        cout<<prefix[v-1]<<endl;
        
    }
    
    
    return 0;
}