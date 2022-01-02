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

// using linear search with O(n)
vector<int> linearFind(int arr[], int n, int x) {
  vector<int> ans(2, -1);

  rep(i, 0, n) {
    if (arr[i] == x) {
      ans[0] = i;
      break;
    }
  }

  rev(i, n - 1, 0) {
    if (arr[i] == x) {
      ans[1] = i;
      break;
    }
  }

  return ans;
}

// using binary search with O(logn)
vector<int> binaryFind(int arr[], int n, int x) {
  vector<int> ans(2, -1);

  int start,end;
  int l = 0, r = n - 1;
  int mid;
  while(l <= r){
    mid = l + (r - l)/2;
    
    // element found
    if(arr[mid] == x){

      start = mid;
      end = mid;

      while(start >= 0 && arr[--start] == x){
        start--;
      }

      while(end <= n-1 && arr[end] == x){
        end++;
      }

      ans[0] = start+1;
      ans[1] = end-1;

      break;
    }else if(arr[mid] < x){
      l = mid + 1;
    }else{
      r = mid - 1;
    }
  }

  return ans;
}

int main() {
  fastIO();

  int n, x;
  cin >> n >> x;
  int a[n];
  for (int &i : a) {
    cin >> i;
  }

  vector<int> ans = binaryFind(a, n, x);

  for (int a : ans) {
    cout << a << space;
  }

  return 0;
}