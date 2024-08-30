#include<bits/stdc++.h>
using namespace std;
int main (){
 freopen("a.txt", "r", stdin);

 string s;
	cin >> s;
	int n = s.size();
 unordered_map<string,int>rec;
	for(int i = 1; i < n; i++){
		if(s.substr(i, n - i) == s.substr(0, n - i) && i < n - i){
			cout << "YES\n";
			cout << s.substr(i, n - i);
			return;
		}
	}
	cout << "NO\n";

 return 0;
}