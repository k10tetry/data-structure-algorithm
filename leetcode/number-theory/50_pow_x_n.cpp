#include <bits/stdc++.h>

using namespace std;

/* 
Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).
*/

/* 
Solved using binary exponentiation approach, time is 0ms and 100% faster solution.
*/

class Solution {
public:
    double myPow(double x, int n) {
        
        if(x == 0){
            return 0;
        }
        
        double res = 1;
        int pow = abs(n);
        while(pow > 0){
            if(pow % 2 == 1) res *= x;
            x *= x;
            pow /= 2;
        }
        if(n < 0) res = 1/res;
        return res;
    }
};