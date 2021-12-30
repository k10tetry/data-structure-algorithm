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

int main() {
  fastIO();

  int n, m;
  cin >> n >> m;
  int a[n][m];

  rep(r, 0, n) {
    rep(c, 0, m) { cin >> a[r][c]; }
  }

  int col = 0;
  int row = 0;

  rep(i, 0, min(n,m)) {
    // clockwise
    if (i % 2 == 0) {

      // print columns l -> r
      rep(c, col, m - col) { cout << a[row][c] << space; }

      row++;

      // print rows t -> b
      rep(r, row, n - row){
        cout << a[r][m - 1 - col] << space;
      }

    }else{

      // print columns r -> l
      rev(c, m - 1 - col, col){
        cout << a[n - row][c] << space;
      }

      // print row b -> t
      rev(r, n - 1 - row, row){
        cout << a[r][col] << space;
      }

      col++;
    }
  }

  return 0;
}