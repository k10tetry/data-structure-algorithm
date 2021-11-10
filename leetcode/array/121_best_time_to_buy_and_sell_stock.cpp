#include <bits/stdc++.h>

using namespace std;

/* 
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0
*/

/* 
Solving leetcode problem after 4-5 days, failed in first 3 attempts but succeded at last after analysing the problem properly, the time is 116ms and 72% faster solution.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0, j = 1;
        int profit = 0;
        
        while(i < prices.size() && j < prices.size()){
            if(prices[j] - prices[i] < 0){
                i = j;
                j++;
            }else{
                profit = max(profit, prices[j] - prices[i]);
                j++;
            }
        }
        return profit;
    }
};