# Matrix Exponentiation

Matrix exponentiation is almost same as binary exponentitation, the only difference is in binary exponentiation we evaluate a^n where a is number and n is power value and in matrix exponentiation we evaluate A^n where A is multi-dimensional array matrix and n is the power value.

## Matrix Multiplication

Before learning matrix exponentiation we need to understand how the **matrix multiplication** is performed. Matix multiplication can only be possible iff the number of columns of Matrix-1 is equal to the number of rows of Matrix-2.

The first row of Matrix-1 will be mutliplied with the first column of Matrix-2 and till the first row of Matrix-1 is completely multiplied with all the columns of Matrix-2, if there is another 2 row in Matrix-1 then the same multiplication process happens again. As mentioned earlier columns of Matrix-1 must be equal to rows of Matrix-2 and the result of matrix multiplication will be rows of Matrix-1 and colums of Matrix-2 i.e r1 x c2

Let's take example of two matrix A and B
<pre>
| 1 2 | x | 2 2 |
| 2 2 | x | 2 2 |
</pre>

<pre>
| (A00 _ B00) + (A01 _ B10) (A00 _ B01) + (A01 _ B11) | = | 6 6 |
| (A10 _ B00) + (A11 _ B10) (A10 _ B01) + (A11 _ B11) | = | 8 8 |
</pre>

The result of above squared matrix multiplication is 2 x 2 matrix i.e r1 x c2

Refer to the programs for better understanding [Matrix Multiplication](./code/matrix_multiplication.cpp) and [Matrix Multiplication with pointers](./code/matrix_multiplication_pointer.cpp)

## Matrix Exponentiation

For exponentiation we will store the result matrix in the identity matrix which should of r1 x c2 and all the diagonal elements is 1 and others 0. If any Matrix-A multiplied with identity Matrix-I the result will be Matrix-A

Matrix-I x Matrix-A = Matrix-A

<pre>
| 1 0 | x | 1 2 | = | 1 2 |
| 0 1 | x | 2 2 | = | 2 2 |
</pre>

[Matrix Exponentiation](./code/matrix_exponentiation.cpp)
