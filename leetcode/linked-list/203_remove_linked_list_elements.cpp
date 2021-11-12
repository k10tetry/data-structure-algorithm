#include <bits/stdc++.h>

using namespace std;

/* 
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.
*/

/* 
Solved the daily challenge successfully after spend some time and having patience, 20ms time and 84% faster solution.
*/

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* itr = head;
        ListNode* prev = head;
        while(itr){
            if(itr->val == val){
                if(head == itr){
                    head = itr->next;
                    prev = head;
                }else{
                    prev->next = itr->next;
                }
            }else{
                prev = itr;
            }
            itr = itr->next;
        }
        return head;
    }
};