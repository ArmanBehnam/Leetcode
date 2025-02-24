# Longest Palindromic Substring (LeetCode #5)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-5.%20Longest%20Palindromic%20Substring-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/longest-palindromic-substring/)

## Problem Description
Given a string `s`, return the longest palindromic substring in `s`.
A string is palindromic if it reads the same forward and backward.

### Examples
```bash
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.

Input: s = "cbbd"
Output: "bb"
```

## Solutions
- [Python Solution](./sol.py) - O(n) using Manacher's Algorithm
- [Java Solution](./Solution.java) - O(n) using Manacher's Algorithm
- [C Solution](./solution.c) - O(n) using Manacher's Algorithm with manual memory management


### Approach
We use Manacher's Algorithm which:

1. Transforms the input string by adding special characters

    -   Insert '#' between each character
    -   Add boundary markers ('^' and '$')
    -   Example: "babad" → "^#b#a#b#a#d#$"


2. Uses dynamic expansion around centers:

    -   Maintains current center and right boundary
    -   Uses mirror property to skip unnecessary comparisons
    -   Tracks maximum palindrome length and center


3. Key optimizations:

    -   Reuses previously computed palindrome lengths
    -   Avoids redundant character comparisons
    -   Single pass through the string

## Directory Structure
```bash
.
├── README.md      # This file
├── my.py          # Python solution class
├── sol.py         # Python test cases
├── Solution.java  # Java solution class
├── Main.java      # Java test cases
├── solution.c     # C solution implementation
└── main.c         # C test cases
```

## Performance:

- Time Complexity: O(n)
- Space Complexity: O(n)

## Constraints
- `1` <= `s.length` <= `1000`
- `s` consist of only digits and English letters


## Performance Comparison
Initial DP Solution:

- Runtime: 2402ms (Beats 27.11%)
- Memory: 20.13MB (Beats 11.89%)

Optimized Manacher's Algorithm:

- Runtime: ~100ms (Beats >90%)
- Memory: ~14MB (Beats >80%)
