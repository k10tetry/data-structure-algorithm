#include <bits/stdc++.h>

using namespace std;

/* 
Given the head of a singly linked list, reverse the list, and return the reversed list.
*/

/* 
The approach is to take the value of head and create new node with that value and set it's next to NULL pointer. Time 8ms and 68% faster
*/

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp = NULL;
        while(head != NULL){
            ListNode* new_node = new ListNode(head->val);
            new_node -> next = temp;
            temp = new_node;
            head = head -> next;
        }
        return temp;
    }
};