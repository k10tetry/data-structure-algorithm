# Stack

Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).

Mainly the following three basic operations are performed in the stack:

- Push: Adds an item in the stack. If the stack is full, then it is said to be an **Overflow condition**.
- Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an **Underflow condition**.
- Peek or Top: Returns the top element of the stack.
- isEmpty: Returns true if the stack is empty, else false.

Implementation:
There are two ways to implement a stack:

- [Using array](./code/stack_array.cpp)
- [Using linked list](./code/stack_linked_list.cpp)

## Stack in STL

The STL (Standard Template Library) comes with template classes that provide common C++ data structures. Therefore, a stack can also be implemented in STL. We simply include this library in our code and use it to define a stack.

```cpp
stack<T> st;
```

Stack Operations:

- push()
- pop()
- peek()
- empty()
- size()
- top()