#include<iostream>

using namespace std;

class ListNode{
    public:
        int value;
        ListNode *next;
        ListNode() : value(0),next(NULL){}
        ListNode(int value) : value(value),next(NULL){}
        ListNode(int value,ListNode* next) : value(value),next(next){}
};

class Queue{
    ListNode *head;
    ListNode *rear;
    int sizee;
public:
    Queue():sizee(0),head(NULL),rear(NULL){}

    void push(int value){
        if(head == NULL){
            ListNode *node = new ListNode(value);
            rear = node;
            head = node;
        }else{
            ListNode *node = new ListNode(value);
            rear->next = node;
            rear = node;
        }
        cout << value << " pushed in queue" << endl;
        sizee++;
    }

    int pop(){
        if(head == NULL){
            cout << "Queue Overflow" << endl;
            return -1;
        }
        int value = head->value;
        head = head->next;
        sizee--;
        cout << value << " popped from queue" << endl;
        return value;
    }

    int front(){
        cout << head->value << " front of queue" << endl;
        return head->value;
    }

    int back(){
        cout << rear->value << " back of queue" << endl;
        return rear->value;
    }

    bool empty(){
        cout << (head == NULL ? "queue is empty" : "queue is not empty") << endl;
        return head == NULL;
    }

    int size(){
        cout << sizee << " size of queue" << endl;
        return sizee;
    }
};

int main(){
    Queue queue;

    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);
    queue.push(5);

    queue.front();
    queue.back();

    queue.pop();
    queue.pop();
    queue.pop();

    queue.empty();
    queue.size();

    return 0;
}