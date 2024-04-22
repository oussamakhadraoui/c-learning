 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    int openLock(vector<string>& d, string t) {
        set<string> dead(d.begin(), d.end());
        map<string, int> dist;

        queue<pair<string, int>> q;
        dist["0000"] = 0;
        q.push({"0000", dist["0000"]});

        while(!q.empty()) {
            pair<string, int> f = q.front();
            string p = f.first;
            int dd = f.second;
            q.pop();

            if (dead.count(p)) continue;

            for (int i=0 ; i<4 ; i++) {
                string ch = p;
                ch[i] = ch[i] < '9' ? ch[i] + 1 : '0';
                if (!dist.count(ch)) {
                    dist[ch] = dd+1;
                    q.push({ch, dd+1});
                }

                ch = p;
                ch[i] = ch[i] > '0' ? ch[i] - 1 : '9';
                if (!dist.count(ch)) {
                    dist[ch] = dd+1;
                    q.push({ch, dd+1});
                }
            }
        }

        return dist.count(t) ? dist[t] : -1;
    }
};
 