	#include <bits/stdc++.h>
using namespace std;
 vector<int>AllPrimeFactors(int N) {
	    vector<int> vec;
	    for(int i=2; i*i<=N; i++)   //always update the N so it reduce to sqrt maybe even less
	    {
	        if(N%i==0){
	            vec.push_back(i);
	            while(N%i == 0)
	            {
	                N/=i;   
	            }
	        }
	    }
	    if(N!=1)vec.push_back(N);      //if the end of N is not 1 there is a prime number stack in there
	    return vec;
	}