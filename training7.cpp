
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
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int length;
        cin >> length;
        string str;
        cin >> str;
        if (length % 2 == 0) {
            unordered_map<char, int> even_count,odd_count;
            for (int i = 0; i < str.length(); i++) {
                if (i % 2 == 0) {
                    even_count[str[i]]++;
                } else {
                    odd_count[str[i]]++;
                }
            }
            char eveM_char = ' ';
            int eveM = 0;
            for (const auto& ee : even_count) {
                if (ee.second > eveM) {
                    eveM = ee.second;
                    eveM_char = ee.first;
                }
            }
            char pddM_char = ' ';
            int pddM = 0;
            for (const auto& ee : odd_count) {
                if (ee.second > pddM) {
                    pddM = ee.second;
                    pddM_char = ee.first;
                }
            }

            int result = length / 2 - eveM + length / 2 - pddM;
            cout << result << endl;
        } else {
            if (length == 1) {
                cout << 1 << endl;
                continue;
            }

            int diffM = numeric_limits<int>::max();
            unordered_map<char, int> even_count,odd_count;
            for (int i = 0; i < length - 1; i++) {
                if (i % 2 == 0) {
                    even_count[str[i]]++;
                } else {
                    odd_count[str[i]]++;
                }
            }
            unordered_map<char, int> future_even_count, future_odd_count;
            int eveM = 0;
            for (const auto& ee : even_count) {
                eveM = max(eveM, ee.second);
            }
            int pddM = 0;
            for (const auto& ee : odd_count) {
                pddM = max(pddM, ee.second);
            }
            diffM = min(diffM, length / 2 - eveM + length / 2 - pddM);
            for (int i = length - 2; i >= 0; i--) {
                if (i % 2 == 0) {
                    even_count[str[i]]--;
                    future_even_count[str[i + 1]]++;
                } else {
                    odd_count[str[i]]--;
                    future_odd_count[str[i + 1]]++;
                }
                unordered_map<char, int> mevenCount = even_count;
                unordered_map<char, int> mergodd = odd_count;
                for (const auto& ee : future_even_count) {
                    mevenCount[ee.first] += ee.second;
                }
                for (const auto& ee : future_odd_count) {
                    mergodd[ee.first] += ee.second;
                }
                eveM = 0;
                for (const auto& ee : mevenCount) {
                    eveM = max(eveM, ee.second);
                }
                pddM = 0;
                for (const auto& ee : mergodd) {
                    pddM = max(pddM, ee.second);
                }

                diffM = min(diffM, length / 2 - eveM + length / 2 - pddM);
            }
            if (length < 2) {
                cout << diffM + 2 << endl;
            } else {
                cout << diffM + 1 << endl;
            }
        }
    }
    return 0;
}
