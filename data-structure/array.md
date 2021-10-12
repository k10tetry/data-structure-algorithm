# Array

An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together.

Advantages of using arrays:

- Arrays allow random access to elements. This makes accessing elements by position faster.
- Arrays have better cache locality that makes a pretty big difference in performance.
- Arrays represent multiple data items of the same type using a single name.

```cpp
#include <iostream>
using namespace std;

int main()
{
    // Creating an integer array named arr of size 10.
    int arr[10];
    // accessing element at 0 index and setting its value
    // to 5.
    arr[0] = 5;
    // access and print value at 0 index we get the output
    // as 5.
    cout << arr[0];
    return 0;
}
```
