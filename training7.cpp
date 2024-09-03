
// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n ;
// 				cin>>n;
// 				string s;
// 				cin>>s;
// 				if(n==1){
// 					cout<<1<<endl;
// 					return ;
// 				}
// 				if(n==2){
// 					cout<<0<<endl;
// 					return ;
// 				}
// 				bool Del=n%2==1;
// 				unordered_map<char,int>odd;
// 				unordered_map<char,int>even;
// 				for(int i=0;i<n;i+=2){
// 							even[s[i]]++;
// 				}
// 				for(int i=1;i<n;i+=2){
// 							odd[s[i]]++;
// 				}
// 				if(Del){
// 					int mini=INT_MAX;
// 					int keyo=-1;
// 					string w="odd";
// 					for(auto &[key,val]:odd){
// 						if(val<mini){
// 							mini=val;
// 							keyo=key;
// 							w="odd";
// 							}
// 					}
// 					for(auto &[key,val]:even){
// 							if(val<mini){
// 							mini=val;
// 							keyo=key;
// 							w="even";
// 							}
// 					}
// 					if(w=="odd"){
// 						odd[keyo]--;
// 					}else{
// 						even[keyo]--;
// 					}
// 				}
// 				int countMax=-1;
// 				int countMax2=-1;
// 				for(auto &[key,val]:odd){
// 					if(countMax<val)countMax=val;
// 				}
// 				for(auto &[key,val]:even){
// 					if(countMax<val)countMax2=val;
// 				}
// 				int result=n-countMax2-countMax;
// 				cout<<result<<endl;
// }

// int main() {
// 	   freopen("a.txt", "r", stdin);
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
    
//     while (t--) {
//         solve();
//     }
    
//     return 0;
// }




/////////////////////////////////////
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     freopen("a.txt", "r", stdin);
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin>>n;
//         vector<string>s(n);
//         for(int i=n-1;i>=0;i--){
//             cin>>s[i];
//         }
//         for(int i =0;i<n;i++){
//             for(int j=0;j<4;j++){
//                 if(s[i][j]!='.'){
//                     cout<<j+1<<" ";
//                     j=4;
//                 }
//             }
//         }
//                 cout<<endl;

//     }
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int computeZeros(int start, string& s, vector<ll>& links, vector<int>& results) {
    if (results[start] != -1) return results[start];
    int zeroCount = 0, current = start;
    vector<int> visited;

    while (results[current] == -1) {
        visited.push_back(current);
        results[current] = 0;
        if (s[current] == '0') zeroCount++;
        current = links[current];
    }

    if (results[current] > 0) zeroCount += results[current];
    for (int idx : visited) results[idx] = zeroCount;

    return zeroCount;
}

void handleCase() {
    int size;
    cin >> size;
    vector<ll> links(size);
    for (int i = 0; i < size; i++) {
        ll pos;
        cin >> pos;
        links[i] = pos - 1;
    }

    string s;
    cin >> s;
    vector<int> results(size, -1);

    for (int i = 0; i < size; i++) {
        if (results[i] == -1) computeZeros(i, s, links, results);
    }

    for (int i = 0; i < size; i++) {
        cout << results[i] << " ";
    }
    cout << endl;
}

int main() {
    freopen("a.txt", "r", stdin);
    int testCases;
    cin >> testCases;
    while (testCases--) {
        handleCase();
    }
    return 0;
}
