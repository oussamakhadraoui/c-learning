 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int>max_heap;
        queue<pair<int,int>>memo;
        int occ[26]={0};

        for(char c :tasks) occ[c-'A']++;
        for(int i =0;i<26;i++){
            if(occ[i])max_heap.push(occ[i]);
        }
        int time=0;
        while(memo.size() ||max_heap.size()){
            time++;
            if(max_heap.size()){
                  int timer=time+n;
                  int current =max_heap.top()-1;
                  max_heap.pop();
                  if(current!=0) memo.push({current,timer});   
            }            
            if(memo.size()){
                while( memo.front().second==time){
                 max_heap.push(memo.front().first);
                 memo.pop();
               } 
            }

  
        }
        
        return time;
        
    }
};