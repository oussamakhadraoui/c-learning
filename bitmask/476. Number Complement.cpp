#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findComplement(int num) {
        int n =num;
        int size=0;
        while(n!=0){
            size++;
            n=n>>1;
        }
        int mask=0;
        for(int i =0;i<size;i++){
            mask=(mask<<1)|1;
        }
        return num^mask;
    }
};