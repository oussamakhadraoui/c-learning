#include<bits/stdc++.h>
using namespace std;
int main (){
 freopen("a.txt", "r", stdin);
 int n;
 cin>>n;
 int result=1;
 string s;
 cin>>s;
 char signe=s[0];
 for(int i =1;i<n;i++){
  cin>>s;
  if(s[0]==signe)continue;
  else{
   result++;
   signe=s[0];
  }
 }

 cout<<result<<endl;
 return 0;
}