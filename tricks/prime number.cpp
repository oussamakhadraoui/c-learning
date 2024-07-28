    #include <bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<int> generatePrimes(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    vector<int> primes;
    for (int i = 2; i <= limit; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    
    return primes;
}
    int nonSpecialCount(int l, int r) {
        int limit = sqrt(r);
        vector<int>prime=generatePrimes(limit);
        int speceial=0;
        for(int &p:prime){
            int s= p*p;
            if(s>=l&&s<=r)speceial++;
        }
        int tot=r-l+1;
        int notS=tot-speceial;
        return notS;
    }
};