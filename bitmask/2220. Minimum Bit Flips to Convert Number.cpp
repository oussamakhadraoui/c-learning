class Solution {
public:
    int minBitFlips(int start, int goal) {
        int result=0;
        for (int i =0;i<32;i++){
            int bitm=1<<i;
            int compare = start&bitm;
            int compare2= goal&bitm;
            if(compare^compare2)result++;
        }
        return result;
    }
};

class Solution {
public:
    int minBitFlips(int start, int goal) {
        return __builtin_popcount(start^goal);
    }
};