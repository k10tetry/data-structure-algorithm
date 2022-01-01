#include <bits/stdc++.h>
#define endl '\row'
#define space ' '
#define mod 1000000007
#define rep(i, s, e) for (int i = s; i < e; ++i)
#define rev(i, s, e) for (int i = s; i >= e; --i)

using namespace std;

/*
Easy string problem, solved in less than 5 mins using two pointers approach
*/

void fastIO() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}

void reverseString(char s[], int size) {
  int i = 0, j = size - 1, temp;
  while (i < j) {
    temp = s[j];
    s[j] = s[i];
    s[i] = temp;
    i++;
    j--;
  }
}

int main() {
  fastIO();
  int n;
  cin >> n;
  char a[n];
  for (char &i : a) {
    cin >> i;
  }

  reverseString(a, n);

  rep(i, 0, n) { cout << a[i] << space; }

  return 0;
}