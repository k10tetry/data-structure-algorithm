#include <bits/stdc++.h>
#define mod 1000000007
#define REP(i,n) for(int i = 0; i < n; i++)
using namespace std;

void multiplyMatrix(int I[][2], int T[][2]){
    int res[][2] = { { 0, 0 }, { 0, 0 } };

    REP(i, 2){
        REP(j, 2){
            REP(k, 2){
                long long ans = (I[i][k] * T[k][j]) % mod;
                res[i][j] = (res[i][j] + ans) % mod;
            }
        }
    }

    REP(i, 2){
        REP(j, 2){
            I[i][j] = res[i][j];
        }
    }

}

int main(){

    // 0 1 1 2 3 5 8 13 21 34

    int arr[] = { 0, 1 };
    int T[][2] = { { 0, 1 }, { 1, 1 } };
    int I[][2] = { { 1, 0 }, { 0, 1 } };
    int n;
    cin >> n;
    n--;

    while (n > 0){
        if (n % 2 == 1) multiplyMatrix(I, T);
        multiplyMatrix(T, T);
        n /= 2;
    }

    cout << (arr[0] * I[0][0] + arr[1] * I[1][0]) % mod << '\n';

    return 0;
}