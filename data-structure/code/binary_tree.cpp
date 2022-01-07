#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = this->right = NULL;
    }
};

void preOrderTraversal(Node* node){

    if (node == NULL){
        return;
    }

    cout << node->data << ' ';
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
}

void inOrderTraversal(Node* node){

    if (node == NULL){
        return;
    }

    inOrderTraversal(node->left);
    cout << node->data << ' ';
    inOrderTraversal(node->right);
}

void postOrderTraversal(Node* node){

    if (node == NULL){
        return;
    }

    postOrderTraversal(node->left);
    postOrderTraversal(node->right);
    cout << node->data << ' ';
}

void insertNode(Node*& node){
    int data;
    cin >> data;

    if (data == -1){
        return;
    }

    node = new Node(data);
    insertNode(node->left);
    insertNode(node->right);
}

int main(){

    Node* root = NULL;

    insertNode(root);

    preOrderTraversal(root);
    cout << '\n';
    inOrderTraversal(root);
    cout << '\n';
    postOrderTraversal(root);

    return 0;
}