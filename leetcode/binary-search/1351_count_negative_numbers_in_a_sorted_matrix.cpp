#include<bits/stdc++.h>
using namespace std;

/* https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/ */

/*
Initially solved using basic binary technique, which result in 14ms time complexity but later on after checking discussion section found more faster solution.
*/

// Second Solution
class Solution{
public:
    int countNegatives(vector<vector<int>>& grid){
        int row = grid.size();
        int column = grid[0].size();
        int count = 0;
        while (row--){
            int c = 0;
            while (c < column && grid[row][c] >= 0){
                c++;
            }
            count += column - c;
        }

        return count;
    }
};

// First Solution
class Solution{
public:
    int countNegatives(vector<vector<int>>& grid){
        int count = 0;
        for (vector<int> list : grid){
            int size = list.size();
            int l = 0, r = size - 1, mid, ans = size;
            while (l <= r){
                mid = l + (r - l) / 2;
                if (list[mid] < 0){
                    ans = mid;
                    r = mid - 1;
                } else{
                    l = mid + 1;
                }
            }
            count += (size - ans);
        }
        return count;
    }
};