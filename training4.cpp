
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;    

int main() {
freopen("a.txt", "r", stdin);
    vector<int> rec;
    vector<int> rec1;
    for(int i = 0;i<1000*2;i++){
        if(i%2==0){
            int x;
            cin>>x;
            rec.push_back(x);
        }
        else{
            int x;
            cin>>x;
            rec1.push_back(x);
        }
       
    }
    sort(rec.begin(),rec.end());
    sort(rec1.begin(),rec1.end());
    int result=0;
    for(int i = 0;i<rec.size();i++){
        result+=abs(rec1[i]-rec[i]);
    }
    cout<<result;
    return 0;
};