#include <bits/stdc++.h>

using namespace std;

// Solved using two pointer one from start and another from end
// which reduces the time complexity to 4ms and makes it 94.40% faster

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string out = s; 
        int i = 0, j = s.length() - 1;
        while(i<=j){
            out[indices[i]] = s[i];
            out[indices[j]] = s[j];
            i++;j--;
        }
        return out;
    }
};