# Binary Exponentiation

Binary exponentiation (also known as exponentiation by squaring) is a trick which allows to calculate a^n an using only O(logn) multiplications (instead of O(n) multiplications required by the naive approach).

## Naive Approach

```cpp
int expo(int value, int pow){
    int res = 1;
    for(int i = 0; i < pow; i++){
        res *= value;
    }
    return res;
}
```

The complexity of above approach is **O(n)**

## Binary Approach

The idea of binary exponentiation is, that we split the work using the binary representation of the exponent.

Let's write n in base 2, for example:
3^13 = 3^1101 = 3^8 _ 3^4 _ 3^1

so, if power is odd the result will be mutliplied by the calculated value, and other wise the number will be multiplied with itself and the power will be divied by 2.

```cpp
int expo(int value, int pow){
    int res = 1;
    while(pow > 0){
        if(pow % 2 == 1) res *= value;
        value *= value;
        pow /= 2;
    }
    return res;
}
```

## Modulo Multiplication

Effective computation of large exponents modulo a number

```cpp
#define mod 1000000007
long long expo(long long value, long long pow){
    long long res = 1;
    while(pow > 0){
        if(pow % 2 == 1) res = (res * value) % mod;
        value = (value * value) % mod;
        pow /= 2;
    }
    return res;
}
```
