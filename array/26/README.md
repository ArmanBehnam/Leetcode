# Remove Duplicates from Sorted Array (LeetCode #26)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-26.%20Remove%20Duplicates%20from%20Sorted%20Array-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

## Problem Description
Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates **in-place** such that each unique element appears only **once**. The **relative order** of the elements should be kept the **same**. Return *the number of unique elements in* `nums`.

The solution must modify the input array in-place and the first k elements should contain the unique elements in the original order.

### Examples
```bash
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements being 1 and 2 respectively.

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements being 0, 1, 2, 3, and 4 respectively.
```

## Solutions
- [Python Solution](./sol.py) - O(n) using sorting and two pointers
- [Java Solution](./Solution.java) - O(n) using sorting and two pointers
- [C Solution](./solution.c) - O(n) using sorting and two pointers


### Approach

1. Use two pointers:
    -   points to position for next unique element
    -   iterates through the array
2. Only copy elements when they differ from previous element
3. Return k as the count of unique elements

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
- Basic case: `[1,1,2]` → `2, [1,2,_]`
- Multiple duplicates: `[0,0,1,1,1,2,2,3,3,4]` → `5, [0,1,2,3,4,_,_,_,_,_]`
- No duplicates: `[1,2,3]` → `3, [1,2,3]`
- Single element: `[1]` → `1, [1]`
- Empty array: `[]` → `0, []`
- Null/empty input handling


## Performance
- Python: ~80ms
- Java: ~1ms
- C: ~12ms

## Notes

- Solution must modify array in-place
- No extra space allowed (O(1) space complexity)
- Must preserve relative order of elements
- First k elements must contain unique elements
- Remaining elements after k can be any value
- Input array is guaranteed to be sorted