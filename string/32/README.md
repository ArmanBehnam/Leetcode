# Longest Valid Parentheses (LeetCode #32)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-32.%20Longest%20Valid%20Parentheses-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/longest-valid-parentheses/)

## Problem Description

Given a string containing just the characters `'('` and `')'`, return the length of the longest valid (well-formed) parentheses substring.

### Examples
```bash
Input: s = "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()".

Input: s = ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()".

Input: s = ""
Output: 0
```

## Solutions
- [Python Solution](./sol.py) -  Stack & Two-pass approaches
- [Java Solution](./Solution.java) - Stack-based approach
- [C Solution](./solution.c) - Both Stack & Two-pass implementations


### Approach
1. Stack-based Approach (O(n) time, O(n) space)

    -   Use a stack to track indices of characters
    -   Initialize stack with -1 as a starting point
    -   For '(', push index onto stack
    -   For ')', pop from stack
        -   If stack becomes empty, push current index as new base
        -   Otherwise, calculate valid substring length (current index - stack top)


2. Two-pass Approach (O(n) time, O(1) space)

    -   First pass: scan left to right

        -   Count open and close parentheses
        -   When counts equal, calculate valid substring length
        -   Reset when more closing than opening

    -   Second pass: scan right to left

        -   Same logic but reversed direction
        -   Reset when more opening than closing


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

- Time Complexity: O(n) for both approaches
- Space Complexity:

    - Stack approach: O(n)
    - Two-pass approach: O(1)

## Constraints
- `0 <= s.length <= 3 * 10^4`
- `s[i]` is `'('`, or `')'`



## Performance Optimization

- Memoization reduces time complexity from O(2^n) to O(mn)
- Early returns for base cases
- Efficient state representation
- Memory management considerations (especially in C)
