
#include<bits/stdc++.h>
 
using namespace std;
int main()
{
 
   int t;
   cin>>t;
   unordered_map<int,int>mp;
   while(t--){
        int n;
        int isOk=1;
        cin>>n;
        vector<int>seats;
        for(int i =0;i<n;i++){
            int num;
            cin>>num;
            seats.push_back(num);            
        }
        unordered_map<int,int>rec;
        for(int i =0;i<n;i++){
            if(i==0) {
                rec[seats[i]]++;
                continue;
            }
            if((!rec[seats[i]-1]&&!rec[seats[i]+1])){
                cout<<"NO"<<endl;
                isOk=0;
                break;
            }
            rec[seats[i]]++;
        }
        if(isOk)cout<<"YES"<<endl;
   }
   return 0;
}