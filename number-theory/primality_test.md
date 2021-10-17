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

All divisors of a number occurs in pairs of (a,b) s.t **a\*b = n**
For example all divisors of 12 are: 1, 2, 3, 4, 6, 12
pairs are: (1,12), (2,6), (3,4)
So, to get another pair we simply need to divide the number with 12 and only upto 3

Suppose n is composite, so n = a\*b for 2 <= a,b <= n-1
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

## Sieve of Eratosthenes

Sieve of Eratosthenes is an algorithm for finding all the prime number in a segment [1:n] using O(nloglogn) operations.

Let's find all the prime number from 1 to 50:

- First we will create an bool array of size n and mark every index as prime(_true_), also mark 0th index that is number 1 as not prime(_false_)

- Now we start the loop from 2 to sqrt(n), and if the number is prime(_true_) we will mark all the multiples of it as not prime(_false_) till n because the multiple of prime number can not be a prime number

- As the above process ends, we can iterate through the array and display all the number which are marked as prime(_true_)

Now the question is why to iterate till sqrt of n, see that sqrt of 50 is around 7.07 so
7 * b, considering multiples of 7 i.e (1, 2, 3, 4, 5, 6, 7, so on) b < 7 the result of their multiples were already marked as not prime numbers. 7*7 = 49 <= 50, 7*8 = 56 > 50 out of range. Considering 8, all multiple <8 were already covered so 8*8 = 64 > 50 out of range.

```cpp
#define max 1000000
int main(){

    bool isPrime[max + 1];

    for(int i = 0; i <= max; i++) isPrime[i] = true;
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i * i <= max; i++){
        if(isPrime[i]){
            for(int j = i * i; j <= max; j+=i){
                isPrime[j] = false;
            }
        }
    }

    for(int i = 0; i <= max; i++){
        if(isPrime[i]) cout << i << endl;
    }

    return 0;
}
```
