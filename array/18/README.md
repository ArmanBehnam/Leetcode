# 4Sum (LeetCode #18)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-18.%204Sum-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/4sum/)

## Problem Description
Given an array `nums` of `n` integers and an integer `target`, return all unique quadruplets `[nums[a], nums[b], nums[c], nums[d]]` such that:
- `0 <= a, b, c, d < n`
- `a`, `b`, `c`, and `d` are **distinct**
- `nums[a] + nums[b] + nums[c] + nums[d] == target`

You may return the answer in **any order**.

### Examples
```bash
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]
```

## Solutions
- [Python Solution](./sol.py) - O(n³) using sorting and two pointers
- [Java Solution](./Solution.java) - O(n³) using sorting and two pointers
- [C Solution](./solution.c) - O(n³) using sorting and two pointers


### Approach

1. Sort the array first
2. Use two nested loops to fix first two numbers
3. Use two pointers for the remaining two numbers
4. Skip duplicates at each level to avoid duplicate quadruplets
5. Handle integer overflow using long/long long types

## Directory Structure
```bash
.
├── README.md      # This file
├── my.py         # Python solution class
├── sol.py        # Python test cases
├── Solution.java  # Java solution class
├── Main.java     # Java test cases
├── sol.c         # C solution implementation
└── main.c        # C test cases
```

## Test Cases
All solutions tested with:

- `[1,0,-1,0,-2,2], target = 0` → `[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]`
- `[2,2,2,2,2], target = 8` → `[[2,2,2,2]]`
- `[1,2,3,4], target = 100` → `[]`
- Edge cases: empty array, array with less than 4 elements
- Overflow cases: large numbers that could cause integer overflow

## Performance
- Python: ~200ms
- Java: ~15ms
- C: ~20ms

## Notes

- The problem is an extension of 3Sum problem
- Solutions must handle duplicate quadruplets
- Integer overflow needs careful handling
- Memory management is crucial in C implementation
- Proper sorting and skipping duplicates improves efficiency
- Early termination optimizations possible but not implemented for clarity
- Dynamic memory allocation in C requires careful memory cleanup