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

int palindromeString(string s) {
  int i = 0;
  int j = s.length() - 1;
  while (i < j) {
    if (s[i] != s[j]) {
      return 0;
    }
    i++;
    j--;
  }
  return 1;
}

int main() {
  fastIO();
  string s;
  cin >> s;

  cout << palindromeString(s);

  return 0;
}