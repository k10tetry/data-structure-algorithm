# Trie Data Structure

Tries is a tree that stores strings. The maximum number of children of a node is equal to the size of the alphabet. Trie supports search, insert and delete operations in O(L) time where L is the length of the key.

Why Trie?

- With Trie, we can insert and find strings in O(L) time where L represent the length of a single word. This is obviously faster than BST. This is also faster than Hashing because of the ways it is implemented. We do not need to compute any hash function.
- Another advantage of Trie is, we can easily print all words in alphabetical order which is not easily possible with hashing.
- We can efficiently do prefix search (or auto-complete) with Trie.
- The most common use of tries in real world is the autocomplete feature that we get on a search engine(now everywhere else too).
- Trie also has helped in checking the correct spellings of a word, as the path is similar for a slightly misspelled word.
- String matching is another case where tries to excel a lot.

The only problem with this data structure is it takes lots of memory space.

[Trie Implementation](./code/trie.cpp)

### Problems Solved:

- [Stream of Characters](https://leetcode.com/problems/stream-of-characters/)
