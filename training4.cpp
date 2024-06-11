#include <bits/stdc++.h>
using namespace std;
int main(){
 freopen("a.txt","r",stdin);
 int t;
 cin>>t;

 while(t--){
  int n;
  cin>>n;
  int sum=0;
  
   int result=0;
  for(int i=2;i<=n;i++){
   int j=1;
   int collector=0;
   while(i*j<=n){
     collector+=i*j;
     j++;
   }
   if(collector>sum){
    sum=collector;
    result=i;
   }
  }
  cout<<result<<endl;
 }
 return 0;
}