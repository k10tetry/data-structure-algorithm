#include <bits/stdc++.h>

using namespace std;

/* 
A string is a valid parentheses string (denoted VPS) if it meets one of the following:

It is an empty string "", or a single character not equal to "(" or ")",
It can be written as AB (A concatenated with B), where A and B are VPS's, or
It can be written as (A), where A is a VPS.

We can similarly define the nesting depth depth(S) of any VPS S as follows:

depth("") = 0
depth(C) = 0, where C is a string with a single character not equal to "(" or ")".
depth(A + B) = max(depth(A), depth(B)), where A and B are VPS's.
depth("(" + A + ")") = 1 + depth(A), where A is a VPS.

For example, "", "()()", and "()(()())" are VPS's (with nesting depths 0, 1, and 2), and ")(" and "(()" are not VPS's.

Given a VPS represented as string s, return the nesting depth of s.
*/

/* 
Easy stack problem, solved using both the techniques, time is 0ms and 100% faster
*/

// Using Stack
class Solution {
public:
    int maxDepth(string s) {
        int mx = 0;
        stack<char> stk;
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '(') {
                stk.push('(');
            }
            if(s[i] == ')'){ 
                mx = max(mx, (int) stk.size()); stk.pop(); 
            }
        }
        return mx;
    }
};

// Using String
class Solution {
public:
    int maxDepth(string s) {
        int mx = 0, left = 0;
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '(') left++;
            if(s[i] == ')') left--;
            mx = max(mx,left);
        }
        return mx;
    }
};