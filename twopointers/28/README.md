# Find the Index of the First Occurrence in a String (LeetCode #28)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-28.%20Find%20the%20Index%20of%20the%20First%20Occurrence%20in%20a%20String-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/)

## Problem Description

Given two strings `needle` and `haystack`, return the index of the first occurrence of `needle` in haystack, or `-1` if `needle` is not part of `haystack`.

### Examples
```bash
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.

# The first occurrence is at index 0, so we return 0.
Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
```

## Solutions
- [Python Solution](./solution.py)
- [Java Solution](./Solution.java)
- [C Solution](./solution.c)

### Approach

All three implementations use a straightforward string searching approach:

1. Edge Cases:

   - If the needle is empty, return 0
   - If the needle is longer than the haystack, return -1


2. Linear Search:

   - For each possible starting position in the haystack
   - Check if the substring starting at that position matches the needle
   - If a match is found, return the starting index
   - If no match is found after checking all positions, return -1


## Implementation Details
- Python

   - Uses string slicing and direct string comparison
   - Leverages Python's built-in string handling capabilities

- Java

   - Uses the substring method and String.equals() for comparison
   - Efficiently handles string comparison with built-in methods

- C

   - Manual character-by-character comparison
   - Avoids creating additional strings for memory efficiency

## Time & Space Complexity

- Time Complexity: O(m*n)

   - m is the length of the haystack
   - n is the length of the needle
   - In the worst case, we need to check all m-n+1 positions and each check takes O(n) time


- Space Complexity: O(1)

   - We only use a constant amount of extra space regardless of input size
   - In Python and Java, the substring operations may create additional strings, but this doesn't grow with input size in an algorithmic sense



## Advanced Approaches
For improved efficiency, more sophisticated string matching algorithms could be implemented:

- KMP (Knuth-Morris-Pratt) - O(m+n) time complexity
- Rabin-Karp - O(m+n) average case complexity
- Boyer-Moore - Sublinear time complexity in practice

However, for the given constraints, the naive approach provides a clear and easily understandable solution.


## Constraints

- `1 <= haystack.length, needle.length <= 10^4`
- `haystack` and `needle` consist of only lowercase English characters.