# Hash Table Problems
This directory contains solutions to LeetCode problems that utilize hash tables/maps. These problems typically involve efficient lookups, counting, or mapping of elements.

## Problem List
| # | Title | Difficulty | Key Concepts | My Solution |
|---|-------|------------|--------------|-------------|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | Easy | Hash Table |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/hash_table/1) |
| 3 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Medium | Hash Table, Sliding Window |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/hash_table/3) |
| 12 | [Integer to Roman](https://leetcode.com/problems/integer-to-roman/) | Medium | Hash Table |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/hash_table/12) |
| 13 | [Roman to Integer](https://leetcode.com/problems/roman-to-integer/) | Easy | Hash Table |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/hash_table/13) |
| 17 | [Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) | Medium | Hash Table, Backtracking |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/hash_table/17) |
| 30 | [Substring with Concatenation of All Words](https://leetcode.com/problems/substring-with-concatenation-of-all-words/) | Hard | Hash Table, Sliding Window |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/hash_table/30) |
| 36 | [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/) | Medium | Hash Table |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/hash_table/36) |
| 37 | [Sudoku Solver](https://leetcode.com/problems/sudoku-solver/) | Hard | Hash Table, Backtracking |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/hash_table/37) |
| 41 | [First Missing Positive](https://leetcode.com/problems/first-missing-positive/) | Hard | Hash Table, Array |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/hash_table/41) |
| 49 | [Group Anagrams](https://leetcode.com/problems/group-anagrams/) | Medium | Hash Table, String |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/hash_table/49) |
| 73 | [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/) | Medium | Hash Table, Matrix |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/hash_table/73) |
| 76 | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) | Hard | Hash Table, Sliding Window |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/hash_table/76) |
| 105 | [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | Medium | Hash Table, Tree |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/hash_table/105) |

## Common Patterns & Techniques
1. Frequency Counting
   - Character/element frequency
   - Finding duplicates

2. Two-Pass Solutions
   - Building hash map in first pass
   - Using it in second pass

3. Sliding Window with Hash Table
   - Substring problems
   - Window tracking

4. Space-Time Tradeoff
   - Using extra space for O(1) lookups
   - Caching results

## My suggestions for Hash Table Problems
- Consider using built-in hash table structures
- Think about key-value pairs carefully
- Handle collisions appropriately
- Consider space complexity tradeoffs
- Watch for edge cases with empty or null inputs

## Directory Structure
Each problem directory contains:
problemNumber/
├── q.txt          # Problem description
├── sol.py         # Python solution
├── sol.java       # Java solution
├── my.py          # My Python attempt
└── my.java        # My Java attempt