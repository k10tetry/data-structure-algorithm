#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, q, r, l;
    cin >> t;

    while (t--){
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        int pre[n + 1], suf[n + 1];
        pre[0] = suf[n + 1] = 0;

        for (int i = 1; i <= n; i++){
            pre[i] = gcd(a[i - 1],pre[i - 1]);
        }

        for (int i = n; i > 0; i--){
            suf[i] = gcd(a[i-1], suf[i + 1]);
        }

        while (q--){
            cin >> l >> r;
            cout << gcd(pre[l - 1], suf[r + 1]) << endl;
        }
    }

    return 0;
}