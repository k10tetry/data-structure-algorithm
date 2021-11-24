#include<bits/stdc++.h>
using namespace std;

/* https://leetcode.com/problems/sqrtx/ */

/*
Solved using binary-search algorithm, 6ms and 25 faster solution.
*/

class Solution{
public:
    int mySqrt(int x){
        int l = 0, r = x, ans = 1;
        long long mid;
        while (l <= r){
            mid = l + (r - l) / 2;
            long long sqr = mid * mid;

            if (sqr == x){
                ans = mid;
                break;
            }

            if (sqr < x){
                l = mid + 1;
                ans = mid;
            } else{
                r = mid - 1;
            }
        }
        return ans;
    }
};