# Wildcard Matching (LeetCode #44)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-44.%20Wildcard%20Matching-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/wildcard-matching/)

## Problem Description
Given an input string `s` and a pattern `p`, implement wildcard pattern matching with support for `'?'` and `'*'` where:

- `'?'` Matches any single character
- `'*'` Matches any sequence of characters (including empty sequence)

The matching should cover the entire input string (not partial).

### Examples
```bash
Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".

Input: s = "aa", p = "*"
Output: true
Explanation: '*' matches any sequence.

Input: s = "cb", p = "?a"
Output: false
Explanation: '?' matches 'c', but the second letter is 'a', which does not match 'b'.
```

## Solutions
- [Python Solution](./sol.py) - O(m+n) using greedy approach
- [Java Solution](./Solution.java) - O(m+n) using greedy approach
- [C Solution](./solution.c) - O(m+n) using greedy approach and pointer arithmetic


### Approach
1. Initial DP Solution (Sub-optimal):
    -   Use 2D DP table
    -   O(m*n) time and space complexity
    -   Slower for large inputs


2. Optimized Greedy Solution:
    -   Track last '*' position and match position
    -   Greedy match with backtracking when needed
    -   O(m+n) average time complexity
    -   O(1) space complexity

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

## Test Cases
- All solutions tested with:
- Basic patterns: `"aa"` vs `"a", "aa" vs "*"`
- Single character match: `"cb"` vs `"?a"`
- Multiple wildcards: `"adceb"` vs `"*a*b"`
- Empty strings: `""` vs `""`
- Complex patterns: `"aaabbbaabaaaaababaabaaabbabbbbbbbbaabababbabbbaaaaba"` vs `"*****b*aba***babaa*bbaba***a*aaba*b*aa**a*b*"`
- Performance test with large inputs (1000+ characters)


## Constraints
- `0 <= s.length, p.length <= 2000`
- `s` contains only lowercase English letters
- `p` contains only lowercase English letters, `'?'` or `'*'`


## Performance
Initial DP Solution:

    - Time: O(m*n)
    - Space: O(m*n)
    - Runtime: ~598ms (Beats 38.75%)
    - Memory: ~20.61MB (Beats 38.92%)

Optimized Greedy Solution:

    - Time: O(m+n) average case
    - Space: O(1)
    - Runtime: ~3ms (Beats 99%)
    - Memory: ~42MB (Beats 90%)


## Notes

- Greedy approach significantly outperforms DP solution
- C implementation uses pointer arithmetic for extra efficiency
- Critical to handle consecutive '*' characters efficiently
- Backtracking strategy key for correctness
- Trade-off between code simplicity and performance