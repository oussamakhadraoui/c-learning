#include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin>>n;
    unordered_map<int,int>rec;
    int result=0;
    string s;
    cin>>s;
    bool isOk=false;
    if(s.size()==1)isOk=true;
    for(int i =0;i<s.size();i++){
        rec[s[i]-'a']++;
        if(rec[s[i]-'a']==2){
            isOk=true;
        }
    }
    isOk?cout<<"YES"<<endl:cout<<"NO"<<endl;
    rec.clear();
    return 0;
}