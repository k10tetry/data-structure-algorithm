#include<iostream>
#define N 100

int A[N][N], I[N][N];

using namespace std;

void matrixMultiply(int I[][N], int A[][N], int dim){
    int res[dim][dim];
    
    for (int i = 0; i < dim; i++){
        for (int j = 0; j < dim; j++){
            res[i][j] = 0;
            for (int k = 0; k < dim; k++){
                res[i][j] += I[i][k] * A[k][j];
            }
        }
    }

    for (int i = 0; i < dim; i++){
        for (int j = 0; j < dim; j++){
            I[i][j] = res[i][j];
        }
    }
}

int main(){

    int dim, n;
    cin >> dim >> n;
    
    // to get input matrix
    for (int i = 0; i < dim; i++){
        for (int j = 0; j < dim; j++){
            cin >> A[i][j];
        }
    }

    // creating identity matrix
    for (int i = 0; i < dim; i++){
        for (int j = 0; j < dim; j++){
            if(i == j) I[i][j] = 1;
            else I[i][j] = 0;
        }
    }

    // matrix exponentiation
    while (n > 0){
        if(n % 2 == 1) matrixMultiply(I, A, dim);
        matrixMultiply(A, A, dim);
        n /= 2;
    }

    // print output
    for (int i = 0; i < dim; i++){
        for (int j = 0; j < dim; j++){
            cout << I[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}