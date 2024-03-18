 #include <bits/stdc++.h>
 using namespace std;
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        sort(points.begin(),points.end());
        int result=1;
        int start=points[0][0];
        int end = points[0][1];
        for(int i =1;i<points.size();i++){ 
            if(end<points[i][0]){
                end=points[i][1];
                start=points[i][0];
                result++;
            }else{
                start= max(start,points[i][0]);
                end= min(end,points[i][1]);
            } 
        }
        return result;
    }
};