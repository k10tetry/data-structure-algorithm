#include <bits/stdc++.h>

using namespace std;

/* 
You are given a doubly linked list which in addition to the next and previous pointers, it could have a child pointer, which may or may not point to a separate doubly linked list. These child lists may have one or more children of their own, and so on, to produce a multilevel data structure, as shown in the example below.

Flatten the list so that all the nodes appear in a single-level, doubly linked list. You are given the head of the first level of the list.
*/

/* 
It took some time and checked others solution as well, 4 ms compile time and 77% faster
*/

// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
public:
    Node* flatten(Node* head) {
        if(head == NULL) return head;
        Node* itr = head;
        while(itr){
            if(itr->child){
                Node* pending = itr->next;
                Node* childEnd = itr->child;
                
                while(childEnd->next){
                    childEnd = childEnd->next;
                }
                
                itr->next = itr->child;
                itr->child->prev = itr;
                itr->child = NULL;
                
                childEnd->next = pending;
                if(pending) pending->prev = childEnd;
            }
            itr = itr->next;
        }        
        return head;
    }
};