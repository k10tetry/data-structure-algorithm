#include <bits/stdc++.h>

using namespace std;

/* 
You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/

/* 
Linked List question solved using stack and linked list both, time 22ms and 77% faster
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1, s2, s3;
        int carry = 0, sum = 0;
        ListNode* out = NULL;
        
        while(l1){
            s1.push(l1->val);
            l1 = l1->next;
        }
        
        while(l2){
            s2.push(l2->val);
            l2 = l2->next;
        }
        
        while(!s1.empty() || !s2.empty()){
            sum = carry;
            
            if(!s1.empty()){
                sum += s1.top();
                s1.pop();
            }
            
            if(!s2.empty()){
                sum += s2.top();
                s2.pop();
            }
            
            carry = sum/10;
            ListNode* node = new ListNode(sum%10);
            node->next = out;
            out = node;
        }
        
        if(carry != 0){
            ListNode* node = new ListNode(carry);
            node->next = out;
            out = node;
        }
        
        return out;
    }
};