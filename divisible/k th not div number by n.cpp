#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    freopen("a.txt", "r", stdin);
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int div,rank;
        cin>>div>>rank;
        int x=rank/(div-1);
        if((rank+x)%div==0)cout<<rank+x-1<<endl;
        else cout<<rank+x<<endl;
    }
    return 0;
}
