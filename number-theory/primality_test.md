# Primality Test

A natural number **N** is said to be a prime number if it can be divided only by **1** and itself. Primality Testing is done to check if a number is a prime or not. The topic explains different algorithms available for primality testing.

## Naive Method

A simple solution is to iterate through all numbers from 2 to n-1 and for every number check if it divides n. If we find any number that divides, we return false.

```cpp
bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i < n; ++i){
        if(n % i == 0) return false;
    }
    return true;
}
```

The time complexity of this solution is O(n).

## Trail Division Algorithm

All divisors of a number occurs in pairs of (a,b) s.t **a*b = n**
For example all divisors of 12 are: 1, 2, 3, 4, 6, 12
pairs are: (1,12), (2,6), (3,4)
So, to get another pair we simply need to divide the number with 12 and only upto 3

Suppose n is composite, so n = a*b for 2 <= a,b <= n-1
Claim: For divisor pair(a,b) one of them is not greater than sqrt(n)
Let's take example of number 25, the sqrt(25) is 5 so instead of looping till 25-1 we need to check till 5.

A composite number has at least one additional divisor, let's call it d. Naturally n/d is also a divisor of n. It's easy to see, that either d <= sqrt(n) or n/d <= sqrt(n), therefore one of the divisors d and n/d is <= sqrt(n). We can use this information to check for primality.

Let's take an example of number 24, 3 is a divisor of 24 and 24/3 i.e 8 is also divisor of 24. so the condition holds that either 3 <= sqrt(24) or 8 <= sqrt(24).

```cpp
bool isPrime(int n){
    if(n <= 1) return false;
    if(n != 2 && n % 2 == 0) return false;
    for(int i = 3; i * i <= n; i+=2){
        if(n % i == 0) return false;
    }
    return true;
}
```