# Euclid Algorithm for GCD

Given two non-negative integers a and b, we have to find their GCD (greatest common divisor), i.e. the largest number which is a divisor of both a and b. It's commonly denoted by gcd(a,b).

When one of the numbers is zero, while the other is non-zero, their greatest common divisor, by definition, is the second number. When both numbers are zero, their greatest common divisor is undefined (it can be any arbitrarily large number), but we can define it to be zero. Which gives us a simple rule: if one of the numbers is zero, the greatest common divisor is the other number.

For positive integers A and B, there exists integer q and r such that

```
A = B * q + r;
```
where 0 <= r < B

The algorithm is extremely simple:

gcd(a,b) = {a if b=0 gcd(b,a mod b) ,otherwise.}

For example GCD(140,12):

140 = 12 * 11 + 8;
12 = 8 * 1 + 4;
8 = 4 * 2 + 0;

The result is 4 because the value of b becomes 0

```cpp
int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}
```