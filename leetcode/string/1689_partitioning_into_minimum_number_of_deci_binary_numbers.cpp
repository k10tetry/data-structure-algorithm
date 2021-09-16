#include <bits/stdc++.h>

using namespace std;

// Main approach is to find the largest number in the string
// time complexity is 35ms and 52% faster

class Solution {
public:
    int minPartitions(string n) {
        char max = '0';
        for(char ch : n){
            if(ch > max){
                max = ch;
            }
            if(max == '9'){
                break;
            }
        }
        return max - '0';
    }
};