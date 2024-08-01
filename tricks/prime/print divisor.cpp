#include <bits/stdc++.h>
using namespace std;

vector<int>allDivisor(int n ){
 vector<int>result;
 for(int i =1;i*i<n;i++){
  if(n%i==0)result.push_back(i);
  if(n%i==0&&i!=n/i)result.push_back(n/i);
 }
 return result;
}
int main(){
 allDivisor(36);
 return 0;
}