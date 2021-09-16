#include <bits/stdc++.h>

using namespace std;

/* 
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".

Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.
*/

// Updated the program for better understand time complexity is 0ms and 100% faster

class Solution {
public:
    string sortSentence(string s) {
        string word;
        vector<string> words(9,"");
        for(int  i= 0; i<s.size();i++){
            
            if(s[i] != ' '){
                word.push_back(s[i]);
            }
            
            if(s[i] == ' ' || i == s.size()-1){
                int num = word[word.length() - 1] - '0';
                word.pop_back();
                word.push_back(' ');
                words[num - 1] = word;
                word.clear();
            }
        }
    
        for(string w : words){
            word.append(w);
        }
        word.pop_back();
        return word;
    }
};