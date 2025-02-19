# Container With Most Water (LeetCode #11)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-11.%20Container%20With%20Most%20Water-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/container-with-most-water/)

## Problem Description
Given an array `height` of `n` integers where each integer represents the height of a vertical line, find two lines that together with the x-axis form a container that holds the most water. Return the maximum amount of water the container can store.

### Examples
```bash
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The max area is formed between lines at index 1 and index 8 (height: 8 and 7)
```

## Solutions
- [Python Solution](./sol.py) - O(n) using two pointers
- [Java Solution](./Solution.java) - O(n) using two pointers
- [C Solution](./solution.c) - O(n) using two pointers

### Time Complexity
- All solutions: O(n) time, O(1) space
- Where n is the length of the input array

### Approach
Use two pointers starting from both ends of the array:
1. Calculate area between current pointers
2. Move the pointer pointing to the shorter line inward
3. Keep track of maximum area seen

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
All solutions tested with:
- `[1,8,6,2,5,4,8,3,7]` → 49
- `[1,1]` → 1
- `[1,2,3,4,5]` → 6
- `[5,4,3,2,1]` → 6
- `[4,4,4,4]` → 12

## Constraints
- n == height.length
- 2 ≤ n ≤ 105
- 0 ≤ height[i] ≤ 104