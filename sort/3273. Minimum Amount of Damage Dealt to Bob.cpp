 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    long long minDamage(int power, vector<int>& damage, vector<int>& health) {
        int n= damage.size();
        vector<pair<int,int>>rec(n);
        int totD=0;
        for(int i =0;i<n;i++){
            rec[i]={damage[i],(health[i] + power - 1) / power};
            totD+=damage[i];
        }
        sort(rec.begin(),rec.end(),[](pair<int,int>&a,pair<int,int>&b){
            int x=1ll*a.second*b.first;
            int y=1ll*b.second*a.first;
            return x<y;
        });
        long long result=0;
        for(int i =0;i<rec.size();i++){
            result+=rec[i].second*totD;
            totD-=rec[i].first;
        }
        return result;
    }
};