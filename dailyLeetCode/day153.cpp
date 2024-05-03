 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> v1,v2;
        int res=0;
        for(int i=0;i<version1.length();i++){
            if(version1[i]=='.'){
                v1.push_back(res);
                res=0;
                continue;
            }
            res=res*10+(version1[i]-'0');
        }
          v1.push_back(res);
        res=0;
           for(int i=0;i<version2.length();i++){
            if(version2[i]=='.'){
                v2.push_back(res);
                res=0;
                continue;
            }
            res=res*10+(version2[i]-'0');
        }
          v2.push_back(res);
         while(v1.size() < v2.size()){
             v1.push_back(0);
             
         }
            while(v1.size() > v2.size()){
               v2.push_back(0);
         }

        if (v1 < v2) return -1;
        if (v1 > v2) return 1;
      
     return 0;
    }
};