 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    int longestIdealString(string s, int k) {
        int n= s.size();
        int result=0;
        vector<int>memo(26,0);
        
        for(int i =0;i<n;i++){
            int maxSize=0;
            char c=s[i];
            for(char last='a';last<='z';last++ ){
                if(abs(c-last)<=k){
                    maxSize=max(maxSize,1+memo[last-'a']);
                } 
            }
            memo[c-'a']=maxSize;
            result=max(result,maxSize);
        }
        return result;
    }
};