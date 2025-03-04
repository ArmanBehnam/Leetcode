# Swap Nodes in Pairs (LeetCode #24)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-24.%20Swap%20Nodes%20in%20Pairs-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/swap-nodes-in-pairs/)

## Problem Description

Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

### Examples
```bash
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map is represented by array [0,1,0,2,1,0,1,3,2,1,2,1].
Input: height = [4,2,0,3,2,5]
Output: 9
```

## Solutions
- [Python Solution](./solution.py) - Optimized two-pointer approach
- [Java Solution](./Solution.java) - Optimized two-pointer approach
- [C Solution](./solution.c) - Optimized two-pointer approach

### Approach

We use an optimized two-pointer approach:

1. Initialize two pointers at the start and end of the array
2. Track maximum heights seen from both left and right
3. Skip initial zeros for efficiency 
4. Process the smaller heights first:
   - If current height < max height on that side, water is trapped
   - Otherwise, update the max height
5. Move pointers inward until they meet

This approach efficiently calculates the trapped water in a single pass through the array.

## Performance:

- **Time Complexity**: O(n) - single pass through the array
- **Space Complexity**: O(1) - constant extra space

## Optimizations
1. Skipping initial zeros
2. Direct comparison instead of using min function
3. Pre-calculating maximum heights
4. Efficient pointer movement based on relative heights

## Constraints
- `n == height.length`
- `1 <= n <= 2 * 10^4`
- `0 <= height[i] <= 10^5`
