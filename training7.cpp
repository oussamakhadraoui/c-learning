
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


int main() {
    freopen("a.txt", "r", stdin);
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int n,k;
        cin>>n>>k;
        if(n>k)cout<<"NO"<<endl;
        else{
            if(n%k==0){
                cout<<"YES"<<endl;
                int time=n/k;
                while(k--){
                    cout<<time<<" ";
                }
                cout<<endl;
            }else{
                
            }
        }
    }
    return 0;
}
