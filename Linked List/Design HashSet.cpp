#include <bits/stdc++.h>
#include <vector>
using namespace std;
class MyHashSet {
public:
    vector<int>v;
    MyHashSet() {
       
    }
    
    void add(int key) {
       v.push_back(key); 
    }
    
    void remove(int key) {
        for (int i=0;i<v.size();i++){
            if(v[i]==key)v[i]=-1;
        }
    }
    
    bool contains(int key) {
        for(int i =0;i<v.size();i++){
            if(v[i]==key)return true;
        }
        return false;
    }
};