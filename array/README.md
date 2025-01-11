# Array Problems
This directory contains solutions to LeetCode problems that focus on array manipulation and algorithms. Array problems typically involve techniques like two-pointers, sliding window, and in-place modifications.

## Problem List
| # | Title | Difficulty | Key Concepts |  My Solution |
|---|-------|------------|--------------|--------------|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | Easy | Hash Table, Array |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/array/1) |
| 4 | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | Hard | Binary Search, Divide & Conquer |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/array/4) |
| 11 | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | Medium | Two Pointers |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/array/11) |
| 15 | [3Sum](https://leetcode.com/problems/3sum/) | Medium | Two Pointers, Sorting |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/array/15) |
| 16 | [3Sum Closest](https://leetcode.com/problems/3sum-closest/) | Medium | Two Pointers, Sorting |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/array/16) |
| 18 | [4Sum](https://leetcode.com/problems/4sum/) | Medium | Two Pointers, Sorting |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/array/18) |
| 26 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | Easy | Two Pointers |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/array/26) |
| 27 | [Remove Element](https://leetcode.com/problems/remove-element/) | Easy | Two Pointers |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/array/27) |
| 31 | [Next Permutation](https://leetcode.com/problems/next-permutation/) | Medium | Array |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/array/31) |
| 33 | [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | Medium | Binary Search |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/array/33) |
| 34 | [Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) | Medium | Binary Search |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/array/34) |
| 35 | [Search Insert Position](https://leetcode.com/problems/search-insert-position/) | Easy | Binary Search |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/array/35) |
| 36 | [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/) | Medium | Hash Table |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/array/36) |
| 37 | [Sudoku Solver](https://leetcode.com/problems/sudoku-solver/) | Hard | Backtracking |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/array/37) |
| 39 | [Combination Sum](https://leetcode.com/problems/combination-sum/) | Medium | Backtracking |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/array/39) |

## Common Patterns & Techniques
1. Two Pointer Technique
   - Used in problems like Container With Most Water, 3Sum
   - Efficient for searching pairs in sorted arrays

2. Binary Search
   - Applied in sorted arrays
   - Used in problems like Search Insert Position

3. In-place Modification
   - Problems like Remove Duplicates
   - Focuses on space efficiency

4. Backtracking
   - Used in problems like Combination Sum
   - Involves exploring all possible combinations

## My suggestions for Array Problems
- Always consider edge cases (empty array, single element)
- Look for sorting opportunities to simplify the problem
- Consider using hash tables for O(1) lookups
- Watch out for duplicate elements
- Consider in-place modifications for space optimization

## Directory Structure
Each problem directory contains:
problemNumber/
├── q.txt          # Problem description
├── sol.py         # Python solution
├── sol.java       # Java solution
├── my.py          # My Python attempt
└── my.java        # My Java attempt