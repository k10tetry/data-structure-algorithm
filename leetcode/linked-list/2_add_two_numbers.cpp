#include <bits/stdc++.h>

using namespace std;

/* 
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/

/* 
33 ms compile time and 56% faster solution
*/

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* itr = head;
        int carry = 0;
        while(l1 || l2){
            int sum = carry;
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
            
            carry = sum/10;
            sum %= 10;
            
            ListNode* node = new ListNode(sum);
            if(head == NULL){
              node->next = head;
              head = node;
              itr = head;
            }else{
                itr->next = node;
                itr = node;
            }
        }
        
        if(carry){
            ListNode* node = new ListNode(carry);
            itr->next = node;
            itr = node;
        }
        return head;   
    }
};