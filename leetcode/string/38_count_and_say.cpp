#include <bits/stdc++.h>

using namespace std;

/* 
The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

    countAndSay(1) = "1"
    countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.

To determine how you "say" a digit string, split it into the minimal number of groups so that each group is a contiguous section all of the same character. Then for each group, say the number of characters, then say the character. To convert the saying into a digit string, replace the counts with a number and concatenate every saying.
*/

/* 
Solved in 2 days, after taking little help from discussion section, time is 4ms and 84% faster solution.
*/

class Solution {
public:
    string countAndSay(int n) {
        string out = "1";
        while(--n){
            string tem = "";
            int cnt = 1;
            int len = out.length();
            for(int i = 1; i <= len; i++){
                if(i == len){
                    tem.push_back(cnt + '0');
                    tem.push_back(out[i-1]);
                    break;    
                }
                if(out[i] != out[i-1]){
                    tem.push_back(cnt + '0');
                    tem.push_back(out[i-1]);
                    cnt = 1;
                }else{
                    cnt++;
                }
            }
            out = tem;
        }
        return out;
    }
};