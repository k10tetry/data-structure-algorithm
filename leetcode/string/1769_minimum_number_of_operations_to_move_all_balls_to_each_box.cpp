#include <bits/stdc++.h>

using namespace std;

// Optimized to some extent using but still not up to mark
// better solution is to first count moves from lhs and then 
// count moves from rhs

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer;
        int ops = 0;
        for(int i=0; i < boxes.length(); i++){
            
            // solve for left part of i
            for(int l = 0; l < i; l++){
                if(boxes[l] == '1'){
                    ops += i-l;
                }
            }
            
            // solve for right part of i
            for(int r = i + 1; r < boxes.length(); r++){
                if(boxes[r] == '1'){
                    ops += r-i;
                }
            }
            
            answer.push_back(ops);
            ops = 0;
        }
        return answer;
    }
};