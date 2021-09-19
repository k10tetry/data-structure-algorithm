#include <bits/stdc++.h>

using namespace std;

/* 
You are given two arrays rowSum and colSum of non-negative integers where rowSum[i] is the sum of the elements in the ith row and colSum[j] is the sum of the elements of the jth column of a 2D matrix. In other words, you do not know the elements of the matrix, but you do know the sums of each row and column.

Find any matrix of non-negative integers of size rowSum.length x colSum.length that satisfies the rowSum and colSum requirements.

Return a 2D array representing any matrix that fulfills the requirements. It's guaranteed that at least one matrix that fulfills the requirements exists.
*/

/* 
Not an optimized solution but passed all test cases time 68ms and 75% faster.
*/

class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>> out(rowSum.size(), vector<int>(colSum.size(),0));
        for(int r = 0; r < rowSum.size(); r++){
            for(int c = 0; c < colSum.size(); c++){
                out[r][c] = min(rowSum[r],colSum[c]);
                rowSum[r] -= out[r][c];
                colSum[c] -= out[r][c];
            }
        }   
        return out;
    }
};