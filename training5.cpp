
#include <bits/stdc++.h>
using namespace std;
int main (){
 freopen("a.txt","r",stdin);
  int n ;
  cin>>n;
  int result=0;
  for(int j=6;j<=n;j++){
    int count=0;
    int num=j;
      for(int i =2;i<=num;i++){
        if(num%i==0){
          count++;
          while(num%i==0){
            num/=i;
          }
        }
      }
      if(count==2)result++;
  }
 cout<<result<<endl;

 return 0;
}