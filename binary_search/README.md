# Binary Search Problems
This directory contains solutions to LeetCode problems that focus on binary search algorithms. Binary search problems typically involve finding elements in sorted arrays or applying binary search concepts to optimization problems.

## Problem List
| # | Title | Difficulty | Key Concepts | My Solution |
|---|-------|------------|--------------|-------------|
| 4 | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | Hard | Binary Search, Divide & Conquer |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/binary_search/4) |
| 33 | [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | Medium | Binary Search |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/binary_search/33) |
| 34 | [Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) | Medium | Binary Search |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/binary_search/34) |
| 35 | [Search Insert Position](https://leetcode.com/problems/search-insert-position/) | Easy | Binary Search |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/binary_search/35) |
| 69 | [Sqrt(x)](https://leetcode.com/problems/sqrtx/) | Easy | Binary Search |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/binary_search/69) |
| 74 | [Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/) | Medium | Binary Search, Matrix |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/binary_search/74) |
| 81 | [Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/) | Medium | Binary Search |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/binary_search/81) |
| 153 | [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | Medium | Binary Search |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/binary_search/153) |

## Common Patterns & Techniques
1. Classic Binary Search
   - Used for finding elements in sorted arrays
   - Time complexity: O(log n)

2. Modified Binary Search
   - For rotated arrays
   - Finding boundaries or ranges

3. Binary Search on Answer Space
   - Used when searching for optimal values
   - Applied to minimization/maximization problems

## My suggestions for Binary Search Problems
- Always check array boundaries carefully
- Handle duplicates appropriately
- Consider edge cases (empty array, single element)
- Watch out for integer overflow in mid calculation
- Think about inclusive vs exclusive boundaries

## Directory Structure
Each problem directory contains:
problemNumber/
├── q.txt          # Problem description
├── sol.py         # Python solution
├── sol.java       # Java solution
├── my.py          # My Python attempt
└── my.java        # My Java attempt