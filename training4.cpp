#include <bits/stdc++.h>
using namespace std;
int main(){
 freopen("a.txt","r",stdin);
 int t;
 cin>>t;
 while(t--){
  int x,y;
  cin>>x>>y;
  int len=0;
  pair<int,int> index={-1,-1};
  for(int i =1;i<=x;i++){
    int counter=0;
    pair<int,int> track ={-1,-1};
    bool isTracked=true;
    for(int j=1;j<=y;j++){
        char c;
        cin>>c;
        if(c=='#'){
          counter++;
          if(isTracked){
            track={i,j};
          }
        }
    }
    if(counter>=len){
      len=counter;
      index=track;
    }
  }
  cout<<index.first<<" "<<index.second-(len-1)/2<<endl;
 }
 return 0;
}