#include <bits/stdc++.h>

using namespace std;

/* 
You are given two linked lists: list1 and list2 of sizes n and m respectively.

Remove list1's nodes from the ath node to the bth node, and put list2 in their place.
*/

/* 
Took some time to analyse the solution but it worths, time is 268ms and 95% faster
*/

//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* itr1 = list1;
        ListNode* itr2 = NULL;
        int i = 0;
        
        // iterate the first iterator until it reach to a - 1
        while(itr1){
            if(i == a - 1){
                // store the itr1 pointer to another pointer
                itr2 = itr1->next;
                itr1->next = list2;
                break;
            }
            itr1 = itr1->next;
            i++;
        }
        
        // move pointer to the end of list2
        while(itr1->next){
            itr1 = itr1->next;
        }
        
        // iterate the second pointer until it reach to b + 1
        while(itr2){
            i++;
            if(i == b + 1){
                itr1->next = itr2;
                break;
            }
            itr2 = itr2->next;
        }
        
        return list1;
    }
};