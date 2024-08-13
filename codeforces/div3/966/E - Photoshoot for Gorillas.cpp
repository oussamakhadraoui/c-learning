#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 5;
void solve() {
    ll result = 0;
    int n, m, k, w;
    cin >> n >> m >> k >> w;
    vector<ll> a(w); 
    for (int i = 0; i < w; i++) {
        cin >> a[i];
    }
    vector<ll> l(n + 1, 0);
    vector<ll> c(m + 1, 0);
    for (int i = 0; i <= n - k; i++) {
        l[i]++;
        l[i + k]--;
    }
    for (int i = 0; i <= m - k; i++) {
        c[i]++;
        c[i + k]--;
    }
    for (int i = 1; i < n; i++) {
        l[i] += l[i - 1];
    }
    for (int i = 1; i < m; i++) {
        c[i] += c[i - 1];
    }
    vector<ll> v;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            v.push_back(l[i] * c[j]);
        }
    }
    sort(v.begin(),v.end(),greater<ll>());
    sort(a.begin(),a.end(),greater<ll>());
    for (int i = 0; i < min(w, (int)v.size()); i++) {
        result+=a[i]*v[i];
    }
 
    cout << result << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}