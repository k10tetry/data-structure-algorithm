#include <bits/stdc++.h>

using namespace std;

/* 
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
*/

/* 
Initially i was confused how to delete the node from list but then I managed to solved the problem smoothly, time 12ms and 53% faster
*/

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* res = head;
        while(res != NULL && res->next != NULL){ 
            if(res->val == res->next->val){
                res->next = res->next->next;
            }else{
                res = res->next;
            }
        }
        return head;
    }
};