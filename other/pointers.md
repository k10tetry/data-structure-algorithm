# Pointers

Pointers are the variables that store address of another variables. Basic syntax of pointer is

```cpp
 int var = 20;
 int* ptr; // declare pointer of data type int
 ptr = &var; // assign address of variable var, note that data type of pointer and variable must be same.

 cout << ptr; // return address of var
 cout << var; // return value of var
 cout << *ptr; // return value of var
```

## References and Pointers

There are 3 ways to pass C++ arguments to function:

- call by value
- call by reference with pointer arguments
- call by reference with reference arguments

```cpp
int square(int n){ // call by value
    return n * n;   // create copy of n
}
```

```cpp
void square(int* n){ // call by reference with pointer argument
    *n *= *n;   // explicit de-referencing to get the value of pointer
}
```

```cpp
void square(int &n){ // call by reference with reference argument
    n *= n;     // implicit de-referencing without (*), Pass-by-Reference with Reference Arguments does not require any clumsy syntax for referencing and dereferencing.
}
```

## Array Name as Pointer

An array name contains the address of first element of the array which acts like constant pointer. It means, the address stored in array name can’t be changed. For example, if we have an array named val then val and &val[0] can be used interchangeably.

```cpp
int val[3] = {1,2,3};
int* ptr = val; // or ptr = &val[0] both are same
cout<< ptr[0] << ptr[1] << ptr[2];
```

## Pointer Expressions and Pointer Arithmetic

A limited set of arithmetic operations can be performed on pointers which are:

- incremented ( ++ )
- decremented ( -- )
- an integer may be added to a pointer ( + or += )
- an integer may be subtracted from a pointer ( – or -= )
- difference between two pointers (p1-p2)

## Advanced Pointer Notation

Consider pointer notation for the two-dimensional numeric arrays. consider the following declaration

```cpp
int nums[2][3]  =  { { 16, 18, 20 }, { 25, 26, 27 } };

// In general, nums[ i ][ j ] is equivalent to *(*(nums+i)+j)

*(*nums) == nums[0][0]
*(*nums + 1) == nums[0][1]
*(*nums + 2) == nums[0][2]
*(*(nums + 1)) == nums[1][0]
*(*(nums + 1) + 1) == nums[1][1]
```

## Pointers and String literals

String literals are arrays containing null-terminated character sequences. String literals are arrays of type character plus terminating null-character, with each of the elements being of type const char (as characters of string can’t be modified).

```cpp
const char * ptr = "geek";
char x = *(ptr+3);
char y = ptr[3];
```

## Pointers to pointers

In C++, we can create a pointer to a pointer that in turn may point to data or other pointer. The syntax simply requires the unary operator (*) for each level of indirection while declaring the pointer.

```cpp
char a;
char *b;
char **c;
a = 'g';
b = &a;
c = &b;
```

## Void Pointers

This is a special type of pointer available in C++ which represents absence of type. void pointers are pointers that point to a value that has no type (and thus also an undetermined length and undetermined dereferencing properties).
This means that void pointers have great flexibility as it can point to any data type. There is payoff for this flexibility. These pointers cannot be directly dereferenced. They have to be first transformed into some other pointer type that points to a concrete data type before being dereferenced.

```cpp
void increase(void *data,int ptrsize)
{
    if(ptrsize == sizeof(char))
    {
        char *ptrchar;
          
        //Typecast data to a char pointer
        ptrchar = (char*)data;
          
        //Increase the char stored at *ptrchar by 1
        (*ptrchar)++;
        cout << "*data points to a char"<<"\n";
    }
}
```

## Invalid pointers

A pointer should point to a valid address but not necessarily to valid elements (like for arrays). These are called invalid pointers. Uninitialized pointers are also invalid pointers.

```cpp
int *ptr1;
int arr[10];
int *ptr2 = arr+20;
```

Here, ptr1 is uninitialized so it becomes an invalid pointer and ptr2 is out of bounds of arr so it also becomes an invalid pointer.
**(Note: invalid pointers do not necessarily raise compile errors)**

## NULL Pointers

Null pointer is a pointer which point nowhere and not just an invalid address.
Following are 2 methods to assign a pointer as NULL;

```cpp
int *ptr1 = 0;
int *ptr2 = NULL;
```