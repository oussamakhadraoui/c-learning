#include <bits/stdc++.h>
using namespace std;
int main (){
 
	int n;
    cin>>n;
    vector<int>num(n);
    for(int i =0;i<n;i++){
        cin>>num[i];
    }
    unordered_map<int,int>rec;
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            rec[num[i]+num[j]]++;
        }
    }
    int result=0;
    for(auto&[key,val]:rec){
        result=max(result,val);
    }
    cout<<result<<endl;
 
	return 0;
}