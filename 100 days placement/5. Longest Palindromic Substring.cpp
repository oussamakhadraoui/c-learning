#include <bits/stdc++.h>
using namespace std;

// brute force n3
class Solution {
public:
    string s;
    bool isPal(int i ,int j){
        while(i<=j){
            if(s[i]!=s[j])return false;
            i++;j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        
        this->s=s;
        int n =s.size();

        int sum=0;
        string result="";
        for(int i =0;i<n;i++){
            string c;
     
            for(int j=i;j<n;j++){
                c+=s[j];
                if(isPal(i,j)){
                    if(sum<c.size()){
                        result=c;
                        sum=c.size();
                    }
                }
            }
        }
        return result;
    }
};
// recursion with memo n2
class Solution {
    
    
public:
    int dp[1001][1001];
    string s;
    bool solve(int i ,int j){
        if(i>=j)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]==s[j]){
            return dp[i][j]=solve(i+1,j-1);
        }
        return dp[i][j]=0;        
    }
    
    string longestPalindrome(string s) {
        this->s=s;
        memset(dp,-1,sizeof(dp));
        int n = s.size();
        int result=0,x;
       for(int i =0;i<n;i++){
           for(int j=i;j<n;j++){
               if(solve(i,j)){
                  if(result<(j-i+1)){
                      x=i;result=j-i+1;
                  }
               }
           }
       }
        return s.substr(x,result);
    }
};
// n2 one pass with zero memo 
class Solution {
public:
    string s;
    int n ;
    pair<int,int> domainExpand(int i,int j){
        while(i>=0&&j<n&&s[i]==s[j]){
            i--;
            j++;
        }
        return {j-i-1,i+1}; 
    }
    string longestPalindrome(string s) {
        this->s=s;
        this->n=s.size();
        int start=0,sizo=0;
        if(n<=1)return s;
        for(int i =0;i<n-1;i++){
            pair<int,int> expension1=domainExpand(i,i);
            pair<int,int> expension2=domainExpand(i,i+1);
            if(expension1.first>sizo){
                start=expension1.second;
                sizo=expension1.first;
            }
            if(expension2.first>sizo){
                start=expension2.second;
                sizo=expension2.first;
            }
        }  
        return s.substr(start,sizo);
    }
};