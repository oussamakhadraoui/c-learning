#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& p, vector<int>& h, string d) {
        vector<vector<int>> v;
        int n = p.size();
        for (int i=0 ; i<n ; i++)
            v.push_back({p[i], h[i], d[i]=='R'});
        
        sort(v.begin(), v.end());
        
        stack<vector<int>> st;
        for (int i=0 ; i<n ; i++) {
            bool goToNext = 0;
            while(!st.empty() && st.top()[1] <= v[i][1] && st.top()[2] && !v[i][2]) {
                vector<int> actual = st.top();
                int hh = actual[1];
                int dd = actual[2];
                st.pop();
                if (v[i][1] == hh) {
                    goToNext = 1;
                    break;
                }
                
                v[i][1]--;
                if (!v[i][1]) {
                    break;
                    goToNext = 1;
                }
            }

            if (goToNext)
                continue;

            if (!st.empty() && st.top()[1] > v[i][1] && st.top()[2] && !v[i][2])
            {
                st.top()[1]--;
                if (!st.top()[1])
                    st.pop();
            }
            else if (v[i][1])
                st.push(v[i]);
        }
        
        vector<int> ans;
        map<int,int> mp;
        while(!st.empty()) {
            mp[st.top()[0]] = st.top()[1]; 
            st.pop();
        }
        
        for (int i=0 ; i<n ; i++)
        {
            if (mp.find(p[i]) != mp.end())
                ans.push_back(mp[p[i]]);
        }
        
        return ans;
    }
};