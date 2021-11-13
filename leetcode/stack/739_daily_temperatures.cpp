#include <bits/stdc++.h>

using namespace std;

/*
Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.
*/

/*
Solved the problem after taking guidance from the solution tab of leetcode, but wrote the complete code myself. time is 140ms and 83% faster
*/

class Solution{
public:
    vector<int> dailyTemperatures(vector<int>& temp){
        stack<int> stk;
        int size = temp.size();
        vector<int> ans(size, 0);
        for (int i = 0; i < size; i++){
            while (!stk.empty() && temp[i] > temp[stk.top()]){
                ans[stk.top()] = i - stk.top();
                stk.pop();
            }
            stk.push(i);
        }
        return ans;
    }
};