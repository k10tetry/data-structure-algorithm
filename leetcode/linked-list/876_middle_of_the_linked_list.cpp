#include <bits/stdc++.h>

using namespace std;

/* 
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.
*/

/* 
Solved by first counting the size of the linked list and then traversing upto the size/2 ith node, time complexity 0ms and 100% faster
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
    ListNode* middleNode(ListNode* head) {
        int count = 0, i = 0;
        ListNode *copy = head;
        while(copy != NULL){
            copy = copy -> next;
            count++;
        }
        copy = head;
        while(i != count/2){
            copy = copy-> next;
            i++;
        }
        
        return copy;
    }
};

// Using two pointers
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head,*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};