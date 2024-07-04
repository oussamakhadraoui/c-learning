#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<int,int>rec;
        for(int &num:nums){
            int rest=num%2;
            rec[rest]++;
        }
        int mini=INT_MAX;
        for(auto & [key,val]:rec){
            mini=min(mini,val);
        }
        return mini*2;
    }
};
#include <bits/stdc++.h>
using namespace std;
int main(){

  string s,t;
  cin>>s>>t;

  int breaker=true;
  int n =s.size();
  int n2 =t.size();
  for(int i =1;i<n;i++){
    string result="";
    for(int j=0;j<n;j+=i){
      result+=s[j+i-1];
    }
    bool isOk=true;
    int n3=result.size();
    if(n2==n3){
      for(int x=0;x<n2;x++){
        if(result[x]!=t[x])isOk=false;
      }
      
    }else isOk=false;

    if(isOk){
      cout<<"Yes"<<endl;
      breaker=false;
      i=n;
    }
  }
  if(breaker)cout<<"No"<<endl;
 return 0;
}