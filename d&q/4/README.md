# Median of Two Sorted Arrays (LeetCode #4)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-1.%20Two%20Sum-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/median-of-two-sorted-arrays/)

## Problem Description
Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

### Examples
```bash
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
```

## Solutions
- [Python Solution](./sol.py) - O(log(min(m,n))) using binary search
- [Java Solution](./sol.java) - O(log(min(m,n))) using binary search
- [C Solution](./sol.c) - O(log(min(m,n))) using binary search

### Time Complexity
- All solutions: O(log(min(m,n))) time
- Space Complexity: O(1)

### Approach
Use binary search to find the correct partitioning point in the shorter array that satisfies the median property:

1. Ensure working with shorter array for efficiency
2. Binary search to find partition points in both arrays
3. Check if partitions are correct using max of left parts and min of right parts
4. Handle odd/even total length cases differently

## Directory Structure
```bash
.
├── q.txt          # Problem description
├── sol.py         # Python implementation
├── sol.java       # Java implementation
├── sol.c          # C implementation 
├── my.py          # My Python solution
└── my.java        # My Java solution
└── my.c           # My C solution
```

## Test Cases
All solutions tested with:
- `[2,7,11,15]`, target = 9
- `[3,2,4]`, target = 6
- `[3,3]`, target = 6

## Implementation Notes

- Uses binary search on shorter array for optimal performance
- Handles edge cases (empty arrays, different lengths)
- Careful handling of partition boundaries with infinity values
- Special consideration for odd/even length cases
- Returns float/double with required precision (5 decimal places)