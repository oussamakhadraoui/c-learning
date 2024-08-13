#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        long long s = 0;
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
            s += v[i];
        }
        string d;
        cin >> d;
        long long x = 0;
        long long l = 0, r = n - 1;
    
        while (r > l) {
            while (d[l] == 'R') {
                s -= v[l];
                l++;
            }
            while (d[r] == 'L') {
                s -= v[r];
                r--;
            }
            if (r < l) break;
            x += s;
            s -= v[l];
            l++;
            s -= v[r];
            r--;
        }
        cout << x << endl;
    }
    return 0;
}