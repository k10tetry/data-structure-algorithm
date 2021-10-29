# Fibonacci Numbers

Fibonacci numbers are a sequence of whole numbers arranged as 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation Fn = Fn-1 + Fn-2 with seed values F0 = 0 and F1 = 1

## Naive Approach

The basic program to find the fibonacci number upto n can be solved using O(n) time complexity.

```cpp
int fib(int n){
    if(n == 1) return 1;
    if(n == 0) return 0;
    return fib(n-1) + fib(n-2);
}
```

## Using Matrix Exponentiation

To find the fibonacci number series in O(logn) time complexity we need to understand the below method.

<pre>
| fn0 fn1 | x | a b | = | fn1 fn2 |
              | c d |
</pre>

here fn0 and fn1 are initial numbers of the sequence and a b c d is transition matrix, on multiplication with transition matrix the result will be fn1 and fn2

It is easy to prove the following relation:
(Fn−1 Fn) = (Fn−2 Fn−1) \* (0111)

Denoting P = (0111), we have:

(Fn Fn+1) = (F0 F1) \* Pn

Thus, in order to find Fn, we must raise the matrix P to n. This can be done in O(logn)

[Fibonacci Numbers](./code/fibonacci.cpp)
