```markdown
# Two Sum (LeetCode #1)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-1.%20Two%20Sum-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/two-sum/)

## Problem Description
Given an array of integers `nums` and an integer `target`, return indices of two numbers that add up to `target`. Each input has exactly one solution, and you cannot use the same element twice.

### Examples
```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]  # nums[0] + nums[1] = 2 + 7 = 9
```

## Solutions
- [Python Solution](./sol.py) - O(n) using dictionary 
- [Java Solution](./sol.java) - O(n) using HashMap
- [C Solution](./sol.c) - O(n²) using array iteration

### Time Complexity
- Python/Java: O(n) time, O(n) space
- C: O(n²) time, O(1) space

### Approach
Store previously seen numbers in a hash map for O(1) lookup of complements.

## Directory Structure
```
.
├── q.txt          # Problem description
├── sol.py         # Python solution
├── sol.java       # Java solution
├── sol.c          # C solution 
├── my.py          # My Python solution
└── my.java        # My Java solution
```

## Test Cases
All solutions tested with:
- `[2,7,11,15]`, target = 9
- `[3,2,4]`, target = 6
- `[3,3]`, target = 6

## Constraints
- 2 ≤ nums.length ≤ 104
- -109 ≤ nums[i] ≤ 109
- -109 ≤ target ≤ 109
- Exactly one valid solution exists