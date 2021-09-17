#include <bits/stdc++.h>

using namespace std;

/* 
A string is good if there are no repeated characters.

Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.

Note that if there are multiple occurrences of the same substring, every occurrence should be counted.

A substring is a contiguous sequence of characters in a string.
*/

/* 
Solved using sets to find the unique characters in substring, reduced time complexity to 3ms and 46% faster time, better approach is to use the sliding window technique
*/

class Solution {
public:
    int countGoodSubstrings(string s) {
        int good = 0;  
        
        if(s.length() < 3){
            return good;
        }
        
        for(int i = 0; i < s.length()-2; i++){
            set<char> sets;
            for(int j = i; j < i+3; j++){
                sets.insert(s.at(j));
            }
            if(sets.size() == 3){
                good++;
            }
        }
        
        return good;
    }
};