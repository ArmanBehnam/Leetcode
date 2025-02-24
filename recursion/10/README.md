# Regular Expression Matching (LeetCode #10)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-10.%20Regular%20Expression%20Matching-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/regular-expression-matching/)

## Problem Description

Implement regular expression matching with support for '.' and '*' where:

'.' Matches any single character
'*' Matches zero or more of the preceding element

The matching should cover the entire input string (not partial).

### Examples
```bash
Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".

Input: s = "aa", p = "a*"
Output: true
Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".

Input: s = "ab", p = ".*"
Output: true
Explanation: ".*" means "zero or more (*) of any character (.)".
```

## Solutions
- [Python Solution](./sol.py) - O(mn) using dynamic programming with memoization
- [Java Solution](./Solution.java) - O(mn) using dynamic programming with memoization
- [C Solution](./solution.c) - O(mn) using dynamic programming with manual memory management


### Approach
We use dynamic programming with memoization (top-down approach):

1. State Definition:

    -   dp(i, j) represents if s[i:] matches p[j:]
    -   Base case: when pattern is empty, string must be empty


2. Transitions:

    -   Regular match: current characters match and rest of strings match
    -   Star pattern: either skip the pattern or use current match and repeat


3. Key optimizations:

    -   Memoization to avoid recalculating states
    -   Early returns for base cases
    -   Efficient state representation


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

- Time Complexity: O(mn)
- Space Complexity: O(mn) where m and n are lengths of string and pattern

## Constraints
- `1` <= `s.length` <= `20`
- `1` <= `p.length` <= `20`
- `s` contains only lowercase English letters
- `p` contains only lowercase English letters, '.', and '*'
- It is guaranteed for each appearance of '*', there will be a previous valid character to match



## Performance Optimization

- Memoization reduces time complexity from O(2^n) to O(mn)
- Early returns for base cases
- Efficient state representation
- Memory management considerations (especially in C)
