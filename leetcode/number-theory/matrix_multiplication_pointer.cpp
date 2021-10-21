#include<iostream>

#define endl '\n'
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

void matrixMultiplication(int (*A)[2], int (*B)[2]){
    int res[2][2];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            res[i][j] = 0;
            for (int k = 0; k < 2; k++){
                res[i][j] +=  *(*(A + i) + k) * *(*(B + k) + j);
            }
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            *(*(A + i) + j) = *(*(res + i) + j);
        }
    }
}

int main(){

    int a[2][2] = {{2, 2}, {1, 2}};
    int b[2][2] = {{2, 2}, {1, 2}};

    matrixMultiplication(a,b);

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << *(*(a + i) + j) << ' ';
        }
        cout << endl;
    }

    return 0;
}