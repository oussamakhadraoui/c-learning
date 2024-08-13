
#include<bits/stdc++.h>
 
using namespace std;
int main()
{
   int t;
   cin>>t;
   
   while(t--){
        int n;
        cin>>n;
        string s= to_string(n);
 
        if(s.size()==2){
            cout<<"NO"<<endl;
            continue;
        }
        if(s[0]!='1'||s[1]!='0'||s[2]=='0'){
            cout<<"NO"<<endl;
            continue;
        }
        if(s.size()==3&&s[2]=='1'){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        
   }
   return 0;
}