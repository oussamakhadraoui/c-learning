#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_map<string,int>rec;
        for(auto &x:obstacles){
            string s= to_string(x[0]) + "," + to_string(x[1]);
            rec[s]=1;
        }
        int start=0;
        int x=0,y=0;
        int result=0;
        vector<pair<int,int>>direc={{0,1},{1,0},{0,-1},{-1,0}};
        for(int &c:commands){
            if(c==-1){
                start=(start+1)%4;
            }else if(c==-2){
                start=(start+3)%4;
            }else{
                for(int i =1;i<=c;i++){
                    int newX=direc[start%4].first+x;
                    int newY=direc[start%4].second+y;
                    string s=to_string(newX) + "," + to_string(newY);
                    if(rec[s])break;
                    x=newX;
                    y=newY;
                }

            }
            result=max(result,(x*x+y*y));
        }
        return result;
    }
};