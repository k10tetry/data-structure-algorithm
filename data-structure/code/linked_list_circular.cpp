#include<iostream>

using namespace std;

class ListNode{
    public:
        int value;
        ListNode *next;

        ListNode(): value(0),next(NULL){}
        ListNode(int value):value(value),next(NULL){}
        ListNode(int value, ListNode* next):value(value),next(next){}
};

void insert(ListNode**,int);
void insert(ListNode*&,int);
void printListNodes(ListNode *);

int main(){
    // create NULL last node
    ListNode *last = NULL;

    // pass by reference using pointer
    insert(&last,10);
    insert(&last,20);
    insert(&last,30);
    insert(&last,40);
    insert(&last,50);

    // pass by reference using reference
    insert(last,60);
    insert(last,70);

    // print all nodes
    printListNodes(last);
    return 0;
}

// pass by reference using pointer argument, pointer of pointer
// a pointer variable storing address of another pointer that points to some data
// int a = 10;
// int* ptr = &a;
// int** ptrptr = &ptr;
void insert(ListNode **last, int value){

    if(*last == NULL){
        ListNode* lastNode = new ListNode(value);
        *last = lastNode;
        lastNode->next = *last;
        return;
    }

    ListNode* newNode = new ListNode(value);
    newNode->next = (*last)->next;
    (*last)->next = newNode;
}

// // pass by reference using reference argument, remove the overhead of de-referencing
void insert(ListNode* &last,int value){
    if(last == NULL){
        ListNode* lastNode = new ListNode(value);
        last = lastNode;
        lastNode->next = last;
        return;
    }

    ListNode* newNode = new ListNode(value);
    newNode->next = last->next;
    last->next = newNode;
}

void printListNodes(ListNode* node){
    ListNode *itr = node->next;
    do{
        cout << itr->value << endl;
        itr = itr->next;
    }while(itr != node->next);
}