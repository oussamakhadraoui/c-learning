#include<bits/stdc++.h>
using namespace std;
int main (){
 freopen("a.txt", "r", stdin);
	int x,y,z ;
	cin>>x>>y>>z;
	int maxi= max({x,y,z});
	int mini= min({x,y,z});
	int result=INT_MAX;

	for(int i =mini;i<=maxi;i++){
			int sum=abs(i-x)+abs(i-y)+abs(i-z);
			if(sum<result){
					result=sum;
			}
	}
 cout<<result<<endl;
	

 return 0;
}