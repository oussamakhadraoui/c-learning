#include <bits/stdc++.h>

using namespace std;
int convert(string s) 
{ 
    // Initialize a variable 
    int num = 0; 
    int n = s.length(); 
  
    // Iterate till length of the string 
    for (int i = 0; i < n; i++) 
  
        // Subtract 48 from the current digit 
        num = num * 10 + (int(s[i]) - 48); 
  
    // Print the answer 
    return num; 
} 
int main(){
 freopen("a.txt","r",stdin);
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    
    string s="";
    bool isZero =false;
    for(int i =0;i<n;i++){
        char c;
        cin>>c;
        if(c=='0'&&n>3)isZero=true;
        s+=c;
    }
    if(isZero){
        cout<<'0'<<endl;
        continue;        
    }
    if(n==2){
        cout<<s<<endl;
        continue;
    }
    int minVal=INT_MAX;
    int index=-1;
    for(int i =0;i<(n-2);i++){
        string v="";
        v+=s[i]+s[i+1];
        int minV=convert(v);
        if(minV<minVal){
            minVal=minV;
            index=i;
        }

    }
    vector<int>num;
    num.push_back(minVal);
    for(int i =0;i<n;i++){
        if(i==index){
            i++;
            continue;
        }
        string v="";
        v+=s[i];
        int numero=convert(v);
        num.push_back(numero);
    }
    int result=num[0];
    for(int i =1;i<num.size();i++){
        if(num[i]==1)continue;
        else result+=num[i];        
    } 
    cout<<result<<endl;   
 }
 return 0;
}