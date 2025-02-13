# Three Sum Closest (LeetCode #16)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-16.%20Three%20Sum%20Closest-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/3sum-closest/)

## Problem Description
Given an integer array `nums` of length `n` and an integer `target`, find three integers in `nums` such that the sum is closest to `target`. Return the sum of the three integers. You may assume that each input would have exactly one solution.

### Examples
```bash
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).
```

## Solutions
- [Python Solution](./sol.py) - O(n²) using sorting and two pointers
- [Java Solution](./Solution.java) - O(n²) using sorting and two pointers
- [C Solution](./solution.c) - O(n²) using sorting and two pointers


### Approach
1. Sort the array first
2. Fix one number and use two pointers for the remaining two numbers
3. Keep track of the closest sum found so far
4. Move pointers based on sum comparison with target

## Directory Structure
```bash
.
├── README.md      # This file
├── my.py         # Python solution class
├── sol.py        # Python test cases
├── Solution.java  # Java solution class
├── Main.java      # Java test cases
├── sol.c           # C solution implementation
└── main.c         # C test cases
```

## Test Cases
All solutions tested with:

- `[-1,2,1,-4], target = 1` → `2`
- `[0,0,0], target = 1` → `0`
- `[1,1,1,-1], target = -1` → `1`
- `[-100,-98,-2,7], target = -101` → `-100`
- `[4,0,5,-5,3,3,0,-4,-5], target = -2` → `-2`

## Constraints
- 3 <= nums.length <= 500
- 1000 <= nums[i] <= 1000

## Performance
- Python: ~150ms
- Java: ~5ms
- C: ~8ms

## Notes
- The problem requires careful handling of absolute differences
- Solutions need to consider integer overflow in sum calculations
- Memory management is crucial in C implementation
- Early termination when exact target is found improves runtime
- Array sorting is used as a preprocessing step in all solutions