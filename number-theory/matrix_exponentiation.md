# Matrix Exponentiation

Matrix exponentiation is almost same as binary exponentitation, the only difference is in binary exponentiation we evaluate a^n where a is number and n is power value and in matrix exponentiation we evaluate A^n where A is multi-dimensional array matrix and n is the power value.

Before evaluating matrix exponentiation we need to understand how the **matrix multiplication** is performed. Matix multiplication can only be possible iff the number of columns of Matrix-1 is equal to the number of rows of Matrix-2.

The first row of Matrix-1 will be mutliplied with the first column of Matrix-2 and till the first row of Matrix-1 is completely multiplied with all the columns of Matrix-2, if there is another 2 row in Matrix-1 then the same multiplication process happens again. As mentioned earlier columns of Matrix-1 must be equal to rows of Matrix-2 and the result of matrix multiplication will be rows of Matrix-1 and colums of Matrix-2 i.e r1 x c2

Let's take example of two matrix A and B

| 1 2 | x | 2 2 |
| 2 2 |   | 2 2 |

| (A00 * B00) + (A01 * B10) (A00 * B00) + (A01 * B10)|
