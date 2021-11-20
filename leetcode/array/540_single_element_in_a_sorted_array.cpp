#include <bits/stdc++.h>

using namespace std;

/* https://leetcode.com/problems/single-element-in-a-sorted-array/ */

/* Solved using bruteforce approach in O(n), time is 4ms and 85% faster. Need to solve this in log(n) */

class Solution{
public:
    int singleNonDuplicate(vector<int>& nums) {
        int len = nums.size();
        for(int i = 1; i < len; i += 2){
            if(nums[i-1] != nums[i]){
                return nums[i-1];
            }
        }
        return nums[len-1];
    }
};