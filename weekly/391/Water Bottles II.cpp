 #include <bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int result=0;
        int empty=0;
        while(numBottles>0||numExchange<=empty){
            result+=numBottles;
            empty+=numBottles;
            numBottles=0;
            while(numExchange<=empty){
               empty-=numExchange;
               numExchange++;
               numBottles++;  
            }  
        }
        return result;
    }
};