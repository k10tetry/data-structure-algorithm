# Binary Tree

A tree whose elements have at most 2 children is called a binary tree. Since each element in a binary tree can have only 2 children, we typically name them the left and right child. Binary tree is non-linear data structure.

A Binary Tree node contains following parts:

- Data
- Pointer to left child
- Pointer to right child

## Type of Binary Trees:

- **Full Binary Tree** is a Binary Tree in which every node has 0 or 2 children.
- **Complete Binary Tree** has all levels completely filled with nodes except the last level and in the last level, all the nodes are as left side as possible.
- **Perfect Binary Tree** is a Binary Tree in which all internal nodes have 2 children and all the leaf nodes are at the same depth or same level.
- **Balanced Binary Tree** the height of the tree should be at max log N.
- **Degenerate Binary Tree** is a Binary Tree where every parent node has only one child node.

## Binary Tree representation in C++

```cpp
struct node{
    int data;
    struct node *left;
    struct node *right;
};
```

## Binary Tree Traversal Techniques

- Breath First Search(BFS)
- Depth First Search(DFS)
    - In-Order Traversal(Left Root Right)
    - Pre-Order Traversal(Root Left Right)
    - Post-Order Traversal(Left Right Root)

## Binary Tree Code

- [Using Recursion](/data-structure/code/binary_tree.cpp)