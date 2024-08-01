    #include <bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<int> generatePrimes(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i < limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    vector<int> primes;
    for (int i = 2; i < limit; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    
    return primes;
}
    int countPrimes(int n) {
        vector<int>prime=generatePrimes(n);
        return prime.size();
    }
};