#include <bits/stdc++.h>

using namespace std;

// Solved using string iterator just to get hands on using pointers
// in the problem, time complexity is 0ms and 100% faster

class Solution {
public:
    string interpret(string command) {
        string out;
        for(auto itr = command.begin(); itr != command.end();){
            if(*itr == '(' && *(itr+1) == ')'){
                out.push_back('o');
                itr += 2;
            }else if(*itr == '(' && *(itr+1) == 'a'){
                out.push_back('a');
                out.push_back('l');
                itr += 4;
            }else{
                out.push_back(*itr);
                itr += 1;
            }
        }
        
        return out;
    }
};