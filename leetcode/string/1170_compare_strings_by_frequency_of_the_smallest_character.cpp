#include <bits/stdc++.h>

using namespace std;

/* 
Let the function f(s) be the frequency of the lexicographically smallest character in a non-empty string s. For example, if s = "dcce" then f(s) = 2 because the lexicographically smallest character is 'c', which has a frequency of 2.

You are given an array of strings words and another array of query strings queries. For each query queries[i], count the number of words in words such that f(queries[i]) < f(W) for each W in words.

Return an integer array answer, where each answer[i] is the answer to the ith query.
*/

/* 
Tried to optimize the code by counting the frequency of characters first but it increases the time complexity of program, below answer result time complexity 16ms and 51% faster.
*/

class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        // find lexicographically smallest character in both queries and words and count them
        // store how many query are greater than words
        // return array
        vector<int> que,wor,res;
        
        for(string q : queries){
            sort(q.begin(),q.end());
            int count = 1;
            for(int i = 1; i<q.length(); i++){
                if(q[0] != q[i]){
                    break;
                }
                count++;
            }
            que.push_back(count);
        }
        
        for(string q : words){
            sort(q.begin(),q.end());
            int count = 1;
            for(int i = 1; i<q.length(); i++){
                if(q[0] != q[i]){
                    break;
                }
                count++;
            }
            wor.push_back(count);
        }
        
        sort(wor.begin(),wor.end(),greater<int>());
        for(int n : que){
            int count = 0;
            for(int w : wor){
                if(n < w){
                    count++;
                }else{
                    break;
                }
            }
            res.push_back(count);
        }
        
        return res;
    }
};