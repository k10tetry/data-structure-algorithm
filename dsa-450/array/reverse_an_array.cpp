#include <bits/stdc++.h>
#define endl '\n'
#define space ' '
#define mod 1000000007
#define rep(i, s, e) for (int i = s; i < e; ++i)
#define rev(i, s, e) for (int i = s; i >= e; --i)

using namespace std;

void fastIO(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}

// O(n)
void reverseArray(int a[], int size){
  int i = 0, j = size - 1;
  int temp;

  while (i < j){
    temp = a[j];
    a[j] = a[i];
    a[i] = temp;
    i++;
    j--;
  }
}

// O(n)
void reverseArrayRecursive(int a[], int s, int e){

  if (s >= e){
    return;
  }

  int temp = a[e];
  a[e] = a[s];
  a[s] = temp;

  reverseArrayRecursive(a, s + 1, e - 1);
}

// O(n)
void printArray(int a[], int size){
  rep(i, 0, size){ cout << a[i] << space; }
}

int main(){
  fastIO();

  int n;
  cin >> n;

  int a[n];

  for (int& i : a){
    cin >> i;
  }

  // reverseArray(a, n);
  reverseArrayRecursive(a, 0, n - 1);
  printArray(a, n);

  return 0;
}