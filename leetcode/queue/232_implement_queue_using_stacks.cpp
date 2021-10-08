#include <bits/stdc++.h>

using namespace std;

/* 
Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

Implement the MyQueue class:

    void push(int x) Pushes element x to the back of the queue.
    int pop() Removes the element from the front of the queue and returns it.
    int peek() Returns the element at the front of the queue.
    boolean empty() Returns true if the queue is empty, false otherwise.

Notes:

    You must use only standard operations of a stack, which means only push to top, peek/pop from top, size, and is empty operations are valid.
    Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack's standard operations.
*/

/* 
Took some time to analyse the problem and find the best approach, although it's worth
time is 0ms and 100% faster execution
*/

class MyQueue {
    stack<int> top;
    stack<int> front;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        // get all values from the front stack and push to the top stack so that new value
        // will be added on the top, if there are multiple push operation in sequence, then 
        // this loop won't run everytime because front stack will be empty next time.
        while(!front.empty()){
            top.push(front.top());
            front.pop();
        }
        top.push(x);
    }
    
    int pop() {
        // get all values from top stack and push to the front stack to make first added
        // value to the top of the stack, if there are multiple pop operation in sequence, 
        // then this loop won't run everytime because top stack will be empty next time.
        while(!top.empty()){
            front.push(top.top());
            top.pop();
        }
        int val = front.top();
        front.pop();
        return val;
    }
    
    int peek() {
        while(!top.empty()){
            front.push(top.top());
            top.pop();
        }
        return front.top();
    }
    
    bool empty() {
        return front.empty() && top.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */