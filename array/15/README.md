# Three Sum (LeetCode #15)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-15.%20Three%20Sum-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/3sum/)

## Problem Description
Given an integer array nums, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j, i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`. The solution set must not contain duplicate triplets.

### Examples
```bash
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
```

## Solutions
- [Python Solution](./sol.py) - O(n²) using sorting and two pointers
- [Java Solution](./Solution.java) - O(n²) using sorting and two pointers
- [C Solution](./solution.c) - O(n²) using sorting and two pointers

### Time Complexity
- All solutions: O(n²) time, O(1) space (excluding output space)
- Where n is the length of the input array

### Approach
1. Sort the array first
2. Fix one number and use two pointers for the remaining two numbers
3. Skip duplicates to avoid duplicate triplets
4. Move pointers based on sum comparison with 0

## Directory Structure
```bash
.
├── README.md      # This file
├── my.py         # Python solution class
├── sol.py        # Python test cases
├── Solution.java  # Java solution class
├── Main.java      # Java test cases
├── sol.c     # C solution implementation
└── main.c         # C test cases
```

## Test Cases
All solutions tested with:

- `[-1,0,1,2,-1,-4]` → `[[-1,-1,2],[-1,0,1]]`
- `[0,1,1]` → `[]`
- `[0,0,0]` → `[[0,0,0]]`
- `[] → []`
- `[1,2,-2,-1]` → `[]`

## Constraints
- 3 <= nums.length <= 3000

## Performance
- Python: ~800ms
- Java: ~30ms
- C: ~69ms (optimized version available with better runtime)

## Notes
- The problem requires handling duplicates carefully
- Solutions need to consider integer overflow in sum calculations
- Memory management is crucial in C implementation
- Early termination optimizations can improve runtime
- Array sorting is used as a preprocessing step in all solutions