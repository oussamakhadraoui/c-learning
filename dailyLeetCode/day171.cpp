#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string s;
    int n;
    bool isPal(int i ,int j){
        while(i<=j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
            
        }
        return true;
    }
    void backtrack(int start,vector<vector<string>>&result, vector<string>&sub){
        if(start==n){
            result.push_back(sub);
            return;
        }
        for(int i =start;i<n;i++){
            if(isPal(start,i)){
                sub.push_back(s.substr(start,i-start+1));
                backtrack(i+1,result,sub);
                sub.pop_back();
            }
        }
    }
    vector<vector<string>>partition(string s) {
        this->s=s;
        this->n=s.size();
        vector<vector<string>>result;
        vector<string>sub;
        backtrack(0,result,sub);
        return result;
    }
};