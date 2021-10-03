#include <bits/stdc++.h>

using namespace std;

/* 
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(int val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
*/

/* 
Initially I have used the stl stack data structure to implement the feature, then later on I found better solution by creating own stack, time is 20ms and 84% faster
*/

class MinNode{
  public:
    int value;
    int min;
    MinNode* next;
    MinNode():value(0),min(0),next(NULL){}
    MinNode(int val,int min,MinNode* next):value(val),min(min),next(next){}
};

class MinStack {
    MinNode* head;
public:
    MinStack() {   
        head = NULL;
    }
    
    void push(int val) {
        if(head == NULL){
            MinNode* newNode = new MinNode(val, val, NULL);
            head = newNode;
        }else{
            MinNode* newNode = new MinNode(val, min(val, head->min),head);
            head = newNode;
        }
    }
    
    void pop() {
        head = head->next;
    }
    
    int top() {
        return head->value;
    }
    
    int getMin() {
        return head->min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */