#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        return numBottles+((numBottles-1)/(numExchange-1));
    }
};
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int result=numBottles;
        int empty=numBottles;
        while(empty>=numExchange){
            result+=(empty/numExchange);
            empty=(empty/numExchange)+(empty%numExchange);
        }
        return result;
    }
};