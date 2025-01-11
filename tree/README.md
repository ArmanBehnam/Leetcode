# Tree Problems
This directory contains solutions to LeetCode problems involving tree data structures. These problems focus on binary trees, binary search trees (BST), and various tree traversal and manipulation techniques.

## Problem List
| # | Title | Difficulty | Key Concepts | My Solution |
|---|-------|------------|--------------|-------------|
| 94 | [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/) | Easy | Tree, DFS |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/tree/94) |
| 95 | [Unique Binary Search Trees II](https://leetcode.com/problems/unique-binary-search-trees-ii/) | Medium | Tree, DP |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/tree/95) |
| 96 | [Unique Binary Search Trees](https://leetcode.com/problems/unique-binary-search-trees/) | Medium | Tree, DP |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/tree/96) |
| 98 | [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/) | Medium | Tree, DFS |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/tree/98) |
| 99 | [Recover Binary Search Tree](https://leetcode.com/problems/recover-binary-search-tree/) | Medium | Tree, DFS |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/tree/99) |
| 100 | [Same Tree](https://leetcode.com/problems/same-tree/) | Easy | Tree, DFS |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/tree/100) |
| 101 | [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/) | Easy | Tree, DFS |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/tree/101) |
| 102 | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/) | Medium | Tree, BFS |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/tree/102) |
| 103 | [Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/) | Medium | Tree, BFS |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/tree/103) |

## Common Patterns & Techniques
1. Tree Traversal
  - Inorder (Left-Root-Right)
  - Preorder (Root-Left-Right)
  - Postorder (Left-Right-Root)
  - Level-order (BFS)

2. Recursive vs Iterative
  - Stack-based solutions
  - Queue-based solutions
  - Parent pointers

3. Binary Search Tree Properties
  - Left < Root < Right
  - Balanced vs Unbalanced
  - Height properties

4. Tree Construction/Modification
  - Building from traversals
  - Balancing trees
  - Modifying structure

## My suggestions for Tree Problems
- Draw out the tree structure
- Consider both recursive and iterative approaches
- Watch for BST properties
- Handle null nodes carefully
- Think about tree balance and height
- Consider using BFS vs DFS based on requirements

## Directory Structure
Each problem directory contains:
problemNumber/
├── q.txt          # Problem description
├── sol.py         # Python solution
├── sol.java       # Java solution
├── my.py          # My Python attempt
└── my.java        # My Java attempt