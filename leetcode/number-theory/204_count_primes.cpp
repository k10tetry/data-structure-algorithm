#include <bits/stdc++.h>

using namespace std;

/* 
Given an integer n, return the number of prime numbers that are strictly less than n.

Constraints:

0 <= n <= 5 * 10^6

*/

/* 
This problem could only be solved using Sieve of Eratosthenes because of big constaints 51% faster solution
*/

class Solution {
public:
    int countPrimes(int n) {
        // Sieve of Eratosthenes
        if(n == 0) return 0;
        
        int count = 0;
        vector<bool> isPrime(n,true);
        isPrime[0] = isPrime[1] = false;

        for(int i = 2; i * i <= n; i++){
            if(isPrime[i]){
                for(int j = i * i; j < n; j+=i){
                    isPrime[j] = false;
                }
            }
        }
        
        for(int i = 1; i < n; i++){
            if(isPrime[i]) count++;
        }
        
        return count;
    }
};