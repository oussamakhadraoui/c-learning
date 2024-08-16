#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("a.txt", "r", stdin);
    int n;
    cin >> n;
    vector<int> a(n); 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int>preOdd(n+1,0),preEven(n+1,0);
    for(int i =0;i<n;i++){
        preEven[i+1]=preEven[i];
        preOdd[i+1]=preOdd[i];
        if(i%2==0){
            preEven[i+1]+=a[i];
        }else{
            preOdd[i+1]+=a[i];
        }
    }
    int result=0;
    for(int i =0;i<n;i++){
        int odd=preOdd[i]+(preEven[n]-preEven[i+1]);
        int even=preEven[i]+(preOdd[n]-preOdd[i+1]);
        if(odd==even)result++;
    }
    cout<<result<<endl;
    return 0;
}