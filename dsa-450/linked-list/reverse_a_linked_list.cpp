#include <bits/stdc++.h>
#define endl '\n'
#define space ' '
#define mod 1000000007
#define rep(i, s, e) for (int i = s; i < e; ++i)
#define rev(i, s, e) for (int i = s; i >= e; --i)

using namespace std;

void fastIO() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}

class ListNode {

public:
  int value;
  ListNode *next;

  ListNode() : value(-1), next(NULL) {}
  ListNode(int value, ListNode *next) : value(value), next(next) {}
};

void insertListNode(ListNode *&head, int value) {
  ListNode *next = new ListNode();
  next->value = value;
  next->next = head;
  head = next;
}

void printListNode(ListNode *head) {
  ListNode *itr = head;
  while (itr) {
    cout << itr->value << space;
    itr = itr->next;
  }
  cout << endl;
}

void reverseListNode(ListNode *&head) {
  ListNode* prev = NULL;
  ListNode* next = NULL;
  ListNode* curr = head;

  while(curr){
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }

  head = prev;
}


int main() {
  fastIO();

  int n;
  cin >> n;

  ListNode *head = NULL;

  while (n--) {
    int value;
    cin >> value;
    insertListNode(head, value);
  }

  printListNode(head);
  reverseListNode(head);
  printListNode(head);

  return 0;
}