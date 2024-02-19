#include <bits/stdc++.h>
#include <vector>
using namespace std;
class MyHashMap {
public:
    vector<int>obj;
    MyHashMap() {
        obj.resize(10000001,-1);
    }
    
    void put(int key, int value) {
        obj[key]=value;
    }
    
    int get(int key) {
       return obj[key]; 
    }
    
    void remove(int key) {
        obj[key]=-1;
    }
};