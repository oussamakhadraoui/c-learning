#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        
        int na;
        cin >> na;
        vector<string> s(na);
        for (int i = 0; i < na; i++) {
            cin >> s[i];
        }
        
        for (int i = 0; i < na; i++) {
            string x = s[i];
            unordered_map<char, int> mp_char_to_num;
            unordered_map<int, char> mp_num_to_char;
            bool isOk = true;
            
            if (x.size() != nums.size()) {
                cout << "NO" << endl;
                isOk = false;
            } else {
                for (int j = 0; j < x.size(); j++) {
                    if (mp_char_to_num.find(x[j]) == mp_char_to_num.end()) {
                        if (mp_num_to_char.find(nums[j]) != mp_num_to_char.end() && mp_num_to_char[nums[j]] != x[j]) {
                            cout << "NO" << endl;
                            isOk = false;
                            break;
                        }
                        mp_char_to_num[x[j]] = nums[j];
                        mp_num_to_char[nums[j]] = x[j];
                    } else if (mp_char_to_num[x[j]] != nums[j]) {
                        cout << "NO" << endl;
                        isOk = false;
                        break;
                    }
                }
            }
            
            if (isOk) {
                cout << "YES" << endl;
            }
        }
    }
    
    return 0;
}
