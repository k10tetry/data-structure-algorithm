#include<bits/stdc++.h>
#define endl '\n'
#define space ' '
#define rep(i,s,e) for (int i = s; i < e; ++i)
#define rev(i,s,e) for (int i = s; i >= e; --i)
#define SIZE 26 // lowercase alphabets

using namespace std;

class TrieNode{
public:
    bool isLast;
    TrieNode* arr[SIZE];

    TrieNode(){
        this->isLast = false;
        rep(i, 0, SIZE){
            this->arr[i] = NULL;
        }
    }
};

void insertNode(TrieNode* root, string word){
    TrieNode* temp = root;
    rep(i, 0, word.length()){
        int index = word[i] - 'a';
        if (temp->arr[index] == NULL){
            temp->arr[index] = new TrieNode();
        }
        temp = temp->arr[index];

        if (temp->isLast && i < word.length()){
            temp->isLast = false;
        }
    }
    temp->isLast = true;
}

bool searchNode(TrieNode* root, string query){
    TrieNode* temp = root;
    rep(i, 0, query.length()){
        int index = query[i] - 'a';
        if (temp->arr[index] == NULL){
            return false;
        }
        temp = temp->arr[index];
    }
    return temp->isLast;
}

void traverse(TrieNode* root){
    if (root->isLast){
        return;
    }
    rep(i, 0, SIZE){
        if (root->arr[i]){
            cout << (char)(i + 'a') << space;
            traverse(root->arr[i]);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        TrieNode* root = new TrieNode();
        string word;
        
        rep(i, 0, n){
            cin >> word;
            insertNode(root, word);
        }

        // traverse(root);
        
        rep(i, 0, n){
            cin >> word;
            cout << searchNode(root, word);
        }

    }

    return 0;
}