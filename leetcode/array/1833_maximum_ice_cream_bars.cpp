#include <bits/stdc++.h>

using namespace std;

/* 
It is a sweltering summer day, and a boy wants to buy some ice cream bars.

At the store, there are n ice cream bars. You are given an array costs of length n, where costs[i] is the price of the ith ice cream bar in coins. The boy initially has coins coins to spend, and he wants to buy as many ice cream bars as possible. 

Return the maximum number of ice cream bars the boy can buy with coins coins.

Note: The boy can buy the ice cream bars in any order.
*/

/* 
Solved using greedy algorithm, sorted the ice cream array first and then buy one by one until coins becomes zero.
*/

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int bars = 0;
        sort(costs.begin(),costs.end());
        for(int i = 0; i < costs.size(); i++){
            coins -= costs[i];
            if(coins < 0){
                break;
            }
            bars++;
        }
        return bars;
    }
};