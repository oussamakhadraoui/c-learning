#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int n ;
    cin>>n;
    unordered_map<int,int>rec;
    int result=0;
    for(int i =0;i<2*n;i++){
        int v;
        cin>>v;
        rec[v]++;
        if(rec[v]==2){
            rec.erase(v);
        }
        result=max(result,(int)rec.size());
    }
    cout<<result<<endl;
    rec.clear();
    return 0;
}