 #include <bits/stdc++.h>
 using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int result=0;
        for(int i =0;i<=20;i++){
           int bitm=1<<i;
           int numsXor=0;
           for(int& num:nums){
               int numBit=num&bitm;
               numsXor^=numBit;
           }
           int bitMaskWithK=k&bitm;
           
           if(bitMaskWithK!=numsXor)result++;
       } 
        return result;
    }
};


// ok this is the explanation let we have 1 2 3 ok when we made all xor of them to change 1 to 0 or 0 to 1 we need one operation 
// the 1<<i it create a bitmask with the first bit then we create all the bit mask with those num
// if bit mask with k is diff then the bit mask of num we add 1;