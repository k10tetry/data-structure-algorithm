#include<iostream>

using namespace std;

#define MAX_SIZE 1000

class Queue{ 
    int front, rear, size;
    unsigned int capacity;
    int *array;
public:
    Queue() : Queue(MAX_SIZE){}

    Queue(unsigned int cap){
        capacity = cap;
        front = 0;
        size = 0;
        rear = capacity - 1;
        array = new int[capacity];
    }

    void enqueue(int value){
        if(size == capacity){
            cout << "Queue Overflow" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        array[rear] = value;
        size++;
        cout << value << " enqueued to queue" << endl;
    }

    int dequeue(){
        if(size == 0){
            cout << "Queue Underflow" << endl;
            return -1;
        }
        int value = array[front];
        front = (front + 1) % capacity;
        size--;
        cout << value << " dequeued from queue" << endl;
        return value;
    }

    int getFront(){
        if(size == 0){
            cout << "Queue Underflow" << endl;
            return -1;
        }
        return array[front];
    }

    int getRear(){
        if(size == 0){
            cout << "Queue Underflow" << endl;
            return -1;
        }
        return array[rear];
    }

    bool isEmpty(){
        return size == 0;
    }
};

int main(){

    Queue queue(5);

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);
    queue.enqueue(60);

    cout << queue.getFront() << endl;
    cout << queue.getRear() << endl;
    queue.dequeue();
    cout << queue.getFront() << endl;
    queue.enqueue(60);

    return 0;
}