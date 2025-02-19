# Remove Element (LeetCode #27)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-27.%20Remove%20Element-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/remove-element/)

## Problem Description
Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` **in-place**. The order of the elements may be changed. Return *the number of elements in `nums` which are not equal to `val`*.

The solution must modify the input array in-place and return the number of elements that remain after removing all instances of `val`. The first k elements should contain the remaining elements in any order.

### Examples
```bash
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements being 2.

Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five elements being 0, 1, 4, 0, and 3 in any order.
```

## Solutions
- [Python Solution](./sol.py) - O(n) using sorting and two pointers
- [Java Solution](./Solution.java) - O(n) using sorting and two pointers
- [C Solution](./solution.c) - O(n) using sorting and two pointers


### Approach

1. Use single pointer k to track position for next non-val element
2. Iterate through array once:
    -   If current element != val, copy it to position k
    -   Increment k for each non-val element found
3. Return k as count of remaining elements

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

- Basic case: `[3,2,2,3], val = 3` → `2, [2,2]`
- Multiple vals: `[0,1,2,2,3,0,4,2], val = 2` → `5, [0,1,4,0,3]`
- Empty array: `[]` → `0`
- No elements to remove: `[1,2,3,4], val = 5 → 4, [1,2,3,4]`
- All elements removed: `[1,1,1], val = 1` → `0`


## Performance
- Python: ~35ms
- Java: ~0.2ms
- C: ~4ms

## Notes

- Solution must modify array in-place
- No extra space allowed (O(1) space complexity)
- Order of remaining elements doesn't matter
- Elements beyond k can be any value
- Single pass through array is sufficient
- Efficient for both small and large arrays