#include<iostream>

using namespace std;

class ListNode{
    public:
        int value;
        ListNode *next;
        ListNode():value(0),next(NULL){}
        ListNode(int value):value(value),next(NULL){}
        ListNode(int value,ListNode* next):value(0),next(next){}
};

class Stack{
    ListNode *head;
    public:
        Stack() { head = NULL; }

        void push(int value){
            ListNode *newNode = new ListNode(value);
            newNode->next = head;
            head = newNode;
            cout << value << " Pushed to Stack" << endl;
        }

        int pop(){
            if(head == NULL){
                cout << "Stack Underflow" << endl;
                return 0;
            }
            int value = head->value;
            head = head->next;
            cout << value << " Popped from Stack" << endl;
            return value;
        }

        int peek(){
            if(head == NULL){
                cout << "Stack is Empty" << endl;
                return 0;
            }
            int value = head->value;
            cout << value << " Peeked from Stack" << endl;
            return value;
        }

        bool isEmpty(){
            if(head == NULL){
                cout << "Stack is Empty" << endl;
            }else{
                cout << "Stack is Not Empty" << endl;
            }
            return head == NULL;
        }
};

int main(){
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.push(5);
    stack.peek();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    return 0;
}