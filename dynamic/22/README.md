# Generate Parentheses (LeetCode #22)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-22.%20Generate%20Parentheses-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/generate-parentheses/)

## Problem Description

Given `n` pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

### Examples
```bash
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

Input: n = 1
Output: ["()"]
```

## Solutions
- [Python Solution](./sol.py) - Backtracking approach
- [Java Solution](./Solution.java) - Backtracking with StringBuilder for efficiency
- [C Solution](./solution.c) - Backtracking with manual memory management


### Approach
We use backtracking to build valid combinations:

1. Start with an empty string and track open and closed parenthesis counts
2. At each step, we have two choices:

    -   Add an opening parenthesis '(' if we haven't used all n
    -   Add a closing parenthesis ')' if there are more open than closed


3. Key conditions:

    -   We can only add '(' if open count < n
    -   We can only add ')' if close count < open count
    -   When string length reaches 2*n, we've found a valid combination

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

- Time Complexity: O(4^n / √n), related to the Catalan number
- Space Complexity: O(n) for the recursion stack, O(4^n / √n) for storing all valid combinations

## Constraints
- `1` <= n `<= 8`


## Optimization Notes

- In Java, using StringBuilder instead of String concatenation improves performance
- In C, pre-calculating the Catalan number helps with memory allocation
- Early pruning of invalid states reduces computation
- Using efficient memory management in C to prevent leaks