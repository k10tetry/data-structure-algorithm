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
void deleteNode(ListNode**, int);
void deleteNodeAt(ListNode**, int);

int main(){
    // create NULL head node
    ListNode *head = NULL;

    // pass by reference using pointer
    insert(&head,10);
    insert(&head,20);
    insert(&head,30);

    // pass by reference using reference
    insert(head,40);
    insert(head,50);

    // print all nodes
    printListNodes(head);
    deleteNode(&head, 50);
    deleteNodeAt(&head, 0);
    cout << "After node deletion:" << endl;
    printListNodes(head);

    return 0;
}

// pass by reference using pointer argument, pointer of pointer
// a pointer variable storing address of another pointer that points to some data
// int a = 10;
// int* ptr = &a;
// int** ptrptr = &ptr;
void insert(ListNode **head, int value){
    ListNode* newNode = new ListNode(value,*head);
    *head = newNode;
}

// // pass by reference using reference argument, remove the overhead of de-referencing
void insert(ListNode* &head,int value){
    ListNode* newNode = new ListNode();
    newNode->value = value;
    newNode->next = head;
    head = newNode;
}

void printListNodes(ListNode* head){
    ListNode *itr = head;
    while (itr != NULL){
        cout << itr->value << endl;
        itr = itr->next;
    }
}

void deleteNode(ListNode** head, int value){
    ListNode *itr = *head;
    ListNode *prev = *head;

    if(*head!= NULL && (*head)->value == value){
        *head = (*head)->next;
        return;
    }

    while (itr != NULL){
        if(itr->value  == value){
            prev->next = itr->next;
            break;
        }
        prev = itr;
        itr = itr->next;
    }
}

void deleteNodeAt(ListNode** head, int position){
    ListNode *itr = *head;
    ListNode *prev = *head;
    int counter = 0;

    if(*head!= NULL && position == 0){
        *head = (*head)->next;
        return;
    }

    while (itr != NULL){
        if(counter  == position){
            prev->next = itr->next;
            break;
        }
        prev = itr;
        itr = itr->next;
        counter++;
    }
}