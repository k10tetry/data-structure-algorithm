#include<iostream>

using namespace std;

#define MAX_SIZE 1000

class Stack{
    int top;
public:
    int arr[MAX_SIZE];

    Stack() { top = -1; }

    bool push(int value){
        if(top >= MAX_SIZE - 1){
            cout << "Stack Overflow" << endl;
            return false;
        }
        arr[++top] = value;
        cout << value << " pushed into stack" << endl;
        return true;
    }

    int peek(){
        if(top!=-1){
            cout << "peeked" << endl;
            return arr[top];
        }
        cout << "stack is empty";
        return top;
    }

    int pop(){
        if(top!=-1){
            cout << "popped" << endl;
            return arr[top--];
        }
        cout << "Stack Underflow" << endl;
        return top;
    }

    bool isEmpty(){
        return top < 0;
    }
};

int main(){
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);

    cout << stack.pop() << endl;
    cout << stack.peek() << endl;
    cout << stack.pop() << endl;

    stack.push(5);

    cout << stack.peek() << endl;
    cout << stack.pop() << endl;
    cout << stack.peek() << endl;
    cout << stack.isEmpty() << endl;

    return 0;
}