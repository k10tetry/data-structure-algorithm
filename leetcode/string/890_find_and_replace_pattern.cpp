#include <bits/stdc++.h>

using namespace std;

/* 
Given a list of strings words and a string pattern, return a list of words[i] that match pattern. You may return the answer in any order.

A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get the desired word.

Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.
*/

/* 
Better solution could be using two maps, but solved using pattern matching reduced the time complexity to 0ms and 100% faster
*/

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> output;
        string str = pattern;
        for(string word : words){
            string match = word;
            int ptr = 0;
            for(char ch : word){
                int i = 0, j = word.length()-1;
                while(i<=j){
                    if(pattern[ptr] == pattern[i]){
                        str[i] = ptr;
                    }
                    if(pattern[ptr] == pattern[j]){
                        str[j] = ptr;
                    }
                    
                    if(ch == word[i]){
                        match[i] = ptr;
                    }
                    if(ch == word[j]){
                        match[j] = ptr;
                    }
                    i++;j--;
                }
                ptr++;
            }
            if(!match.compare(str)){
                output.push_back(word);
            }
        }
        return output;
    }
};