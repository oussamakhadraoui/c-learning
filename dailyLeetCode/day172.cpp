#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        unordered_map<char,int>rec;
        int n =words.size();
        for(char& c:letters){
            rec[c]++;
        }
        int result=0;
        for(int mask=0;mask<(1<<n);mask++){
            unordered_map<char,int>rec2;
            for(int i =0;i<n;i++){
                if(mask&(1<<i)){

                    int b=words[i].size();
                    for(int v=0;v<b;v++){
                        rec2[words[i][v]]++;
                        if(rec2[words[i][v]]>rec[words[i][v]]){
                            i=n;
                            rec2.clear();
                            v=b;
                        }
                    }
                }
            } 
            int counter=0;
            for(auto& pairs:rec2){
                counter+=score[pairs.first-'a']*pairs.second;
            }

            result=max(result,counter);
        }
        return result;
    }
};