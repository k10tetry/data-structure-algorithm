#include <bits/stdc++.h>

using namespace std;

/* 
Given the head of a singly linked list, return true if it is a palindrome.
*/

/* 
The approach is to first store the reverse of linked list and then match until values become unequal, time is 272ms and 31% faster
*/

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* itr = head;
        ListNode* rev = NULL;
        while(itr){
            ListNode* newNode = new ListNode(itr->val);
            newNode->next = rev;
            rev = newNode;
            itr = itr->next;
        }
        
        itr = head;
        
        while(itr){
            if(itr->val != rev->val){
                return false;
            }
            itr = itr->next;
            rev = rev->next;
        }
        return true;
    }
};