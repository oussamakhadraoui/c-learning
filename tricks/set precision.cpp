#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision
using namespace std;
int main() {
    double d1;
    cin >>  d1 ;
    cout << fixed << setprecision(3) << d1 << endl;
    // if you put fixed the set precision will target the count of number after  .
    // if you don t put fixed it will target the count of the total number
    return 0;
}
//////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long x=(a%100)*(b%100)*(c%100)*(d%100);
    cout<<setw(2)<<setfill('0')<<x%100<<endl;
    // add leading zero to the answer even if it s 0
    return 0;
}