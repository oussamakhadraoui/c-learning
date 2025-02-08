#include <bits/stdc++.h>

using namespace std;
class NumberContainers {
public:
    unordered_map<int, set<int> >rec;
    unordered_map<int,int>inde;
    NumberContainers() {    
    }
    
    void change(int index, int number) {
        if(inde[index])rec[inde[index]].erase(index); 
        rec[number].insert(index);
        inde[index]=number;
    }
    int find(int number) {
        return rec[number].size()>0?*rec[number].begin():-1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */