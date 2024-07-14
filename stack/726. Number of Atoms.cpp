#include <bits/stdc++.h>

using namespace std;
 class Solution {
public:
    string countOfAtoms(string f) {
        stack<pair<string,int>>atoms;
        int n =f.size();
        for(int i =0;i<n;){
            if(f[i]=='('){
                atoms.push({"counter break",0});
                i++;
                continue;
            }
            if(f[i]==')'){
                string counter="";
                i++;
                while(i<n&&isdigit(f[i])){
                    counter+=f[i];
                    i++;
                }
                int num = 0;
                for (char c : counter) {
                    if (c >= '0' && c <= '9') {
                        num = num * 10 + (c - '0');
                    }
                }
                if(num==0)num=1;
                atoms.push({"counter start",num});
                continue;
            }
            if(isupper(f[i])){
                string at="";
                at+=f[i];
                i++;
                while(i<n&&islower(f[i])){
                    at+=f[i];
                    i++;
                }
                string counter="";
                while(i<n&&isdigit(f[i])){
                    counter+=f[i];
                    i++;
                }
                int num = 0;
                for (char c : counter) {
                    if (c >= '0' && c <= '9') {
                        num = num * 10 + (c - '0');
                    }
                }
                if(num==0)num=1;
                atoms.push({at,num});
            }
        }
        stack<int>time;
        int counter=1;
        unordered_map<string ,int>count;
        vector<pair<string,int>>clone;
        while(!atoms.empty()){
            if(atoms.top().first=="counter start"){
                counter*=atoms.top().second;
                time.push(atoms.top().second);
                atoms.pop();
                continue;
            }
            if(atoms.top().first=="counter break"){
                counter/=time.top();
                time.pop();
                atoms.pop();
                continue;
            }
            count[atoms.top().first]+=atoms.top().second*counter;
            atoms.pop();
        }
        for(auto&[a,b]:count)clone.push_back({a,b});
        
        string result="";
        sort(clone.begin(),clone.end());
        for(auto& pairo:clone)result+=pairo.first+(pairo.second>1?to_string(pairo.second):"");
        return result;
    }
};
