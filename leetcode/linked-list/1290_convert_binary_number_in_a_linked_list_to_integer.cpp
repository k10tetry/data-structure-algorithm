#include <bits/stdc++.h>

using namespace std;

/* 
Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.
*/

/* 
Solved using string variable to store the int value and then using reverse iterator multiply the int with ith power of 2, time complexity 0ms and 100% faster
*/

//  Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string num;
        int res = 0, i = 0;
        while(head != NULL){
            num.push_back(head -> val + '0');
            head = head -> next;
        }
        
        for(auto itr = num.rbegin(); itr != num.rend(); ++itr){
            res += (*itr - '0') * pow(2,i);
            i++;
        }

        // Best Solution
        // while(head != NULL){
        //     res = res * 2 + head -> val;
        // }

        return res;
    }
};