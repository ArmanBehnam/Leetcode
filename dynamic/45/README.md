# Jump Game II (LeetCode #45)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-44.%20Jump%20Game-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/jump-game/)

## Problem Description
Given a 0-indexed array of integers `nums` of length `n`, where each element represents the maximum jump length from that position, return the minimum number of jumps needed to reach the last index. You start at index 0, and it's guaranteed you can reach the last index.

- `'?'` Matches any single character
- `'*'` Matches any sequence of characters (including empty sequence)

The matching should cover the entire input string (not partial).

### Examples
```bash
Input: nums = [2,3,1,1,4]
Output: 2
Explanation: Minimum path is jump 1 step from index 0 to 1, then 3 steps to the last index.

Input: nums = [2,3,0,1,4]
Output: 2
```

## Solutions
- [Python Solution](./sol.py) - O(m+n) using greedy approach
- [Java Solution](./Solution.java) - O(m+n) using greedy approach
- [C Solution](./solution.c) - O(m+n) using greedy approach and pointer arithmetic


### Approach
We use a greedy approach that tracks:

    -   Current maximum reach from the current position
    -   Boundary of current jump
    -   Number of jumps taken

The algorithm moves through the array, updating the maximum reachable position and incrementing jumps when we hit the current boundary.

    -   Time Complexity: O(n)
    -   Space Complexity: O(1)

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


## Constraints
- `1` <= `nums.length` <= `10^4`
- `0` <= `nums[i]` <= `1000`
- It's guaranteed that you can reach `nums[n - 1]`
