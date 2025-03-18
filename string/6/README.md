# ZigZag Conversion (LeetCode #6)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-6.%20ZigZag%20Conversion-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/zigzag-conversion/)

## Problem Description

The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this:

P   A   H   N
A P L S I I G
Y   I   R

And then read line by line: `"PAHNAPLSIIGYIR"`

Write the code that will take a string and make this conversion given a number of rows.

### Examples
```bash
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
Input: s = "A", numRows = 1
Output: "A"
```
## Solutions
- [Python Solution](./solution.py) - Row-based approach with direction tracking
- [Java Solution](./Solution.java) - StringBuilder implementation
- [C Solution](./solution.c) - Dynamic memory allocation approach

### Approach

The solution uses a row-by-row approach:

1. Create an array of strings (or StringBuilders in Java), one for each row of the zigzag pattern
2. Traverse the input string character by character
3. Keep track of the current row and direction of movement (up or down)
4. Add each character to its corresponding row
5. Change direction when reaching the top or bottom row
6. Combine all rows to form the final result

This approach simulates the zigzag pattern efficiently without requiring a large 2D grid.

## Performance

- Time Complexity: O(n)
  - Where n is the length of the input string
  - We traverse each character in the string exactly once

- Space Complexity: O(n)
  - We need to store all characters in the row arrays before joining them

## Test Cases
Each solution includes test cases for:
- Standard zigzag pattern (Examples 1 and 2)
- Edge case with single character (Example 3)
- Edge case with single row

## Constraints

- `1 <= s.length <= 1000`
- `s` consists of English letters (lower-case and upper-case), `,` and `.`
- `1 <= numRows <= 1000`