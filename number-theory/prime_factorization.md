# Prime Factorization

"Prime Factorization" is finding which prime numbers multiply together to make the original number. N = 100, the prime factors are 2^2 * 5^2

## Naive Method

```cpp
void primeFactors(int n){
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            int count = 0;
            while(n % i == 0){
                count++;
                n = n/i;
            }
            cout << i << " ^ " << count << endl;
        }
    }
}
```

The time complexity of above approach is **O(n)**

## Trial Division

This is the most basic algorithm to find a prime factorization.

We divide by each possible divisor d. We can notice, that it is impossible that all prime factors of a composite number n are bigger than sqrt(n). Therefore, we only need to test the divisors 2 <= d <= sqrt(n), which gives us the prime factorization in **O(sqrt(n))**

The smallest divisor has to be a prime number. We remove the factor from the number, and repeat the process. If we cannot find any divisor in the range [2:sqrt(n)], then the number itself has to be prime

```cpp
void primeFactors(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            int count = 0;
            while(n % i == 0){
                count++;
                n = n/i;
            }
            cout << i << " ^ " << count << endl;
        }
    }
    if(n > 1){
        cout << n << " ^ " << 1 << endl;
    }
}
```

## Wheel factorization

This is an optimization of the trial division. The idea is the following. Once we know that the number is not divisible by 2, we don't need to check every other even number. This leaves us with only 50% of the numbers to check. After checking 2, we can simply start with 3 and skip every other number.

```cpp
void primeFactors(int n){

    if(n % 2 == 0){
        int count = 0;
        while(n % 2 == 0){
            count++;
            n = n/i;
        }
        cout << 2 << " ^ " << count << endl;
    }

    for(int i = 3; i * i <= n; i+=2){
        if(n % i == 0){
            int count = 0;
            while(n % i == 0){
                count++;
                n = n/i;
            }
            cout << i << " ^ " << count << endl;
        }
    }
    if(n > 1){
        cout << n << " ^ " << 1 << endl;
    }
}
```

## Sieve of Eratosthenes

Extending the wheel factorization with more and more primes will leave exactly the primes to check. So a good way of checking is just to precompute all prime numbers with the Sieve of Eratosthenes until sqrt(n) and test them individually

```cpp
#define max 1000000

void primeFactors(int n){

    vector<int> primes(max+1, -1);
    // precompute the primes till max
    for(int i = 2; i <= max; i++){
        if(primes[i] == -1){
            for(int j = i; j <= max; j += i){
                if(primes[j] == -1){
                    primes[j] = i;
                }
            }
        }
    }

    while(n > 1){
        int factor = primes[n];
        n /= factor;
        cout << factor << " ";
    }
    
    if(n > 1){
        cout << n;
    }
}
```

The time complexity of above algorithm is O(log n)