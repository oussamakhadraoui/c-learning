#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        int m=points[0].size();
 
        vector<long long>curr(m);
        vector<long long>prev(m);
        for(int i=0;i<m;i++){
            curr[i]=points[0][i];
            prev[i]=points[0][i];
        }
        for(int i =1;i<n;i++){
            prev=curr;

            vector<long long>left(m);
            left[0]=prev[0];
            for(int j=1;j<m;j++) left[j]=max(left[j-1]-1,prev[j]);

            vector<long long>right(m);
            right[m-1]=prev[m-1];
            for(int j=m-2;j>=0;j--) right[j]=max(prev[j],right[j+1]-1);

            for(int j=0;j<m;j++)curr[j]=points[i][j]+max(right[j],left[j]);
        }
        long long result=curr[0];
        for(int i =1;i<m;i++){
            result=max(result,curr[i]);
        }
        return result;
    }
};