#include <bits/stdc++.h>

using namespace std;

/* 
Design a stack which supports the following operations.

Implement the CustomStack class:

CustomStack(int maxSize) Initializes the object with maxSize which is the maximum number of elements in the stack or do nothing if the stack reached the maxSize.
void push(int x) Adds x to the top of the stack if the stack hasn't reached the maxSize.
int pop() Pops and returns the top of stack or -1 if the stack is empty.
void inc(int k, int val) Increments the bottom k elements of the stack by val. If there are less than k elements in the stack, just increment all the elements in the stack.
*/

/* 
Solved using linked list, could be solved using stl stack, need to follow better approach, time is 40ms and 37% faster
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class CustomStack {
    ListNode* head;
    int max, count;
public:
    CustomStack(int maxSize) {
        head = NULL;
        max = maxSize;
        count = 0;
    }
    
    void push(int x) {
        if(count != max){
            ListNode* node = new ListNode(x);
            node->next = head;
            head = node;
            count++;
        }
    }
    
    int pop() {
        if(count == 0){
            return -1;
        }
        int val = head->val;
        head = head->next;
        count--;
        return val;
    }
    
    void increment(int k, int val) {
        ListNode* itr = head;
        int ct = k > count ? 0 : count - k;
        int i = 0;
        while(itr != NULL){
            if(i >= ct){
                itr->val += val;
            }
            itr = itr->next;
            i++;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */