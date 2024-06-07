# Algorithm Analysis

Analysis of algorithms is the determination of the amount of time and space resources required to execute it.

### Asymptotic Notations

Asymptotic notations are the mathematical notations used to describe the running time of an algorithm when the input tends towards a particular value or a limiting value.

- Big-O notation
- Omega notation
- Theta notation

## Big-O Notation (O-notation)

Big-O notation represents the upper bound of the running time of an algorithm. Thus, it gives the worst-case complexity of an algorithm.

O(g(n)) = { f(n): there exist positive constants c and n0 such that 0 ≤ f(n) ≤ cg(n) for all n ≥ n0 }

## Omega Notation (Ω-notation)

Omega notation represents the lower bound of the running time of an algorithm. Thus, it provides the best case complexity of an algorithm.

Ω(g(n)) = { f(n): there exist positive constants c and n0 such that 0 ≤ cg(n) ≤ f(n) for all n ≥ n0 }

## Theta Notation (Θ-notation)

Theta notation encloses the function from above and below. Since it represents the upper and the lower bound of the running time of an algorithm, it is used for analyzing the average-case complexity of an algorithm.

Θ(g(n)) = { f(n): there exist positive constants c1, c2 and n0 such that 0 ≤ c1g(n) ≤ f(n) ≤ c2g(n) for all n ≥ n0 }

## Time Complexities

O(1) < O(loglog n) < O(log n) < O(sqrt n) < O(n) < O(nlog n) < O(n^2) < O(2^n) < O(n!)

## Analysis

### Complexity: O(n)
Loop run for n times
```cpp
for (int i = 0; i < n; ++i){
  cout << i << endl;
}
```
### Complexity: O(n)
Loop run for n times
```cpp
for (int i = n; i > 0; --i){
  cout << i << endl;
}
```
### Complexity: O(n<sup>2</sup>)
First loop run for n times and second loop also run for n times
```cpp
for (int i = 0; i < n; ++i){
  for (int j = 0; j < n; ++j){
  	cout << i << j << endl;
  }
}
```
### Complexity: O(n<sup>3</sup>)
First, second and third loop run for n times
```cpp
for (int i = 0; i < n; ++i){
  for (int j = 0; j < n; ++j){
  	for (int k = 0; k < n; ++k){
  		cout << i << j << k << endl;
  	}
  }
}
```
### Complexity: O(n<sup>2</sup>)
The total number of times code will run is n(n+1)/2 => n<sup>2</sup>
i | j | times
:--- | :--- | :---
0 | 0 | 0
1 | 0, 1 | 1
2 | 0, 1, 2 | 2
3 | 0, 1, 2, 3 | 3
n | 0, 1, 2 ,3...n | n
```cpp
for (int i = 0; i < n; ++i){
  for (int j = 0; j < i; ++j){
  	cout << i << j << endl;
  }
}
```
### Complexity: O(sqrt n)
The program stops when p > n, as p = k(k+1)/2 => k<sup>2</sup> > n => k > sqrt n
i | p
:--- | :---
1 | 0 + 1
2 | 1 + 2
3 | 1 + 2 + 3
k | 1 + 2 + 3 + ... + k
```cpp
int p = 0
for (int i = 1; p <= n; ++i){
  p = p + i;
}
```
### Complexity: O(n)
Here the i is incrementing as 2 -> 2<sup>2</sup> -> 2<sup>3</sup> -> 2<sup>k</sup>, it will stop when i >= n -> 2<sup>k</sup> n -> k >= log<sub>2</sub>n
```cpp
for (int i = 1; i < n; i = i * 2){
  cout << i << endl;
}
```