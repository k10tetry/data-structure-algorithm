# Linked List

- A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations.
- The elements in a linked list are linked using pointers.
- Dynamic size
- Ease of insertion/deletion.

## Singly Linked List

A linked list is represented by a pointer to the first node of the linked list. The first node is called the head. If the linked list is empty, then the value of the head is NULL.
Each node in a list consists of at least two parts:

1. data
2. Pointer (Or Reference) to the next node

```cpp
class Node {
public:
    int data;
    Node* next;
};
```

## Circular Linked List

Circular Linked List is a linked list where all nodes are connected to form a circle. There is no NULL at the end. A circular linked list can be a singly circular linked list or doubly circular linked list.

- Any node can be a starting point. We can traverse the whole list by starting from any point. We just need to stop when the first visited node is visited again.
- Useful for implementation of queue. We can maintain a pointer to the last inserted node and front can always be obtained as next of last.

## Doubly Linked List

A Doubly Linked List (DLL) contains an extra pointer, typically called previous pointer, together with next pointer and data which are there in singly linked list.

- A DLL can be traversed in both forward and backward direction.
- The delete operation in DLL is more efficient if pointer to the node to be deleted is given.
- We can quickly insert a new node before a given node.

```cpp
class Node
{
    public:
    int data;
    Node* next; // Pointer to next node in DLL
    Node* prev; // Pointer to previous node in DLL
};
```

## Applications of Linked List

- Implementation of **stacks** and **queues**
- Implementation of **graphs** : Adjacency list representation of graphs is most popular which is uses linked list to store adjacent vertices.
- Maintaining directory of names.
- Dynamic memory allocation : We use linked list of free blocks.

## Basic Operations on Linked List

- [Traversal](./code/linked_list_traverse_all_nodes.cpp): To traverse all the nodes one after another.
- [Insertion](./code/linked_list_add_new_node.cpp): To add a node at the given position.
- [Deletion](./code/linked_list_delete_node.cpp): To delete a node.
- [Searching](./code/linked_list_search_element_by_value.cpp): To search an element(s) by value.
- [Updating](./code/linked_list_update_element.cpp): To update a node.
- **Sorting**: To arrange nodes in a linked list in a specific order.
- **Merging**: To merge two linked lists into one.
