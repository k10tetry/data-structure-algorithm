# Binary Search Algorithm

Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise, narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.

The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n).

We basically ignore half of the elements just after one comparison.

1. Compare x with the middle element.
2. If x matches with the middle element, we return the mid index.
3. Else If x is greater than the mid element, then x can only lie in the right half subarray after the mid element. So we recur for the right half.
4. Else (x is smaller) recur for the left half.

Iterative Implementation: [link](./code/binary_search_iterative.cpp)
Recursive Implementation: **TODO**

### Problems Solved:

1. Sqrt(x) [link](/leetcode/binary-search/69_sqrt_x.cpp)
2. Count negative numbers in a sorted matrix [link](/leetcode/binary-search/1351_count_negative_numbers_in_a_sorted_matrix.cpp)
