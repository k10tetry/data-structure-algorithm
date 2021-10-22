#include<iostream>

using namespace std;
// In matrix multiplication a[0][0] * b[0][0] + a[0][1] * b[1][0]
// and for multiplication no. of columns of first should be same as no. of rows of seconds // i.e c1 == r2 and result should be r1 x c2 matrix

// { 1 1 } { 1 2 2}
// { 2 2 } { 2 1 1}
// { 3 3 }
// After matix multiplication
// { 3 3 3}
// { 6 6 6}
// { 6 6 6}

int main(){

    int r1, c1, r2, c2;

    cin >> r1 >> c1;
    cout << endl;

    int a[r1][c1];
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            cin >> a[i][j];
        }
    }

    cout << endl;

    cin >> r2 >> c2;

    cout << endl;
    int b[r2][c2];
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            cin >> b[i][j];
        }
    }

    cout << endl;
    cout << "Result" << endl;

    int res[r1][c2];

    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
            res[i][j] = 0;
            for (int k = 0; k < c1; k++){
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}