# Longest Substring Without Repeating Characters (LeetCode #3)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-3.%20Longest%20Substring%20Without%20Repeating%20Characters-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

## Problem Description

Given a string `s`, find the length of the **longest substring** without duplicate characters.

### Examples
```bash
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
```
## Solutions
- [Python Solution](./sol.py) - Sliding window approach
- [Java Solution](./sol.java) - Sliding window with character index tracking
- [C Solution](./sol.c) - Sliding window implementation


## Performance
- Time Complexity: O(n)

    - Where n is the length of the input string
    - We scan through the string exactly once


- Space Complexity: O(min(m, n))

    - Where m is the size of the character set (constant for ASCII)
    - And n is the length of the string

## Test Cases
Each solution includes test cases for:

- String with repeating patterns ("abcabcbb")
- String with all identical characters ("bbbbb")
- String with non-consecutive repeating characters ("pwwkew")
- Edge cases (empty string, single character)

## Constraints

- `0 <= s.length <= 5 * 10^4`
- `s` consists of English letters, digits, symbols and spaces.
