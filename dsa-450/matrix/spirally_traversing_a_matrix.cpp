#include <bits/stdc++.h>
#define endl '\row'
#define space ' '
#define mod 1000000007
#define rep(i, s, e) for (int i = s; i < e; ++i)
#define rev(i, s, e) for (int i = s; i >= e; --i)

using namespace std;

/*
Takes time to find the logic, somehow implemented the solution successfully but
failed at some cases. Took help from the editorial section, the approach was
almost same only issue with the implementation.
*/

void fastIO() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}

int main() {
  fastIO();

  int row, col;
  cin >> row >> col;
  int a[row][col];

  rep(r, 0, row) {
    rep(c, 0, col) { cin >> a[r][c]; }
  }

  int startR = 0;
  int endR = row;
  int startC = 0;
  int endC = col;

  while (startR < endR && startC < endC) {

    // print top row
    rep(i, 0, endC) { cout << a[startR][i] << space; }

    // increment the starting row
    startR++;

    // print last column
    rep(i, startR, endR) { cout << a[i][endC - 1] << space; }

    // decrement the ending column
    endC--;

    if (startR < endR) {
      // print the last row
      rev(i, endC - 1, startC) { cout << a[endR - 1][i] << space; }
      // decrement the ending row
      endR--;
    }

    if (startC < endC) {
      // print the first column
      rev(i, endR - 1, startR) { cout << a[i][startC] << space; }
      // increment the starting column
      startC++;
    }
  }

  return 0;
}