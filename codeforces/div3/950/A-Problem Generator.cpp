#include <bits/stdc++.h>
 
using namespace std;
int main (){
    
    int t;
    cin>>t;
    while(t--){
        unordered_map<char,int>occ;
        int m,n;
        cin>>m>>n;
        string s="";
        for(int i =0;i<m;i++){
            char c;
            cin>>c;
            occ[c]++;
        }
        int result=0;
        for(auto x:occ){
            result+=max(0,n-x.second);
        }
        result+=(7-occ.size())*n;
        cout<<result<<endl;
        occ.clear();
    }
    return 0;
}