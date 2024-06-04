#include <bits/stdc++.h>
 
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
 
        int n,fav,remove;
        cin>>n>>fav>>remove;
        vector<int>num;
        unordered_map<int,int>occ;
        for(int i =0;i<n;i++){
            int v;
            cin>>v;
            num.push_back(v);
            occ[v]++;
        }
        int favo=num[fav-1];
        int comp=occ[favo];
        sort(num.rbegin(),num.rend());
        for(int i =0;i<remove;i++){
            occ[num[i]]--;
        }
        if(occ[favo]==0)cout<<"YES"<<endl;
        else if(occ[favo]==comp)cout<<"NO"<<endl;
        else if(occ[favo]<comp)cout<<"MAYBE"<<endl;
        
        occ.clear();
        num.clear();
    }
    return 0;
}