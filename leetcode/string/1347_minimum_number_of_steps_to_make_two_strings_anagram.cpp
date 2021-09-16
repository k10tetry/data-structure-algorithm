#include <bits/stdc++.h>

using namespace std;

/*
Given two equal-size strings s and t. In one step you can choose any character of t and replace it with another character.

Return the minimum number of steps to make t an anagram of s.

An Anagram of a string is a string that contains the same characters with a different (or the same) ordering.
*/

/*
if character is present in s increment it's position and if character is present in t 
then decrement it's position, 0 value means both have same number of a character, >0 value means character is present in s but not in t, <0 value means character present in t but not in s. we need to replicate s to t so we count the >0 values to get minimum steps.
*/

class Solution {
public:
    int minSteps(string s, string t) {
        int ct[26] = {0};
        int ans = 0;
        
        for(int i = 0; i < s.size(); i++){
            ct[s[i] - 'a']++;
            ct[t[i] - 'a']--;
        }
  
        for(int j = 0; j < 26; j++){
            if(ct[j] > 0){
                ans += ct[j];
            }
        }
        
        return ans;
    }
};