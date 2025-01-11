# Graph Problems
This directory contains solutions to LeetCode problems that focus on graph algorithms and data structures. These problems involve traversal, connectivity, and various graph properties.

## Problem List
| # | Title | Difficulty | Key Concepts | My Solution |
|---|-------|------------|--------------|-------------|
| 133 | [Clone Graph](https://leetcode.com/problems/clone-graph/) | Medium | DFS, Hash Table |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/graph/133) |
| 207 | [Course Schedule](https://leetcode.com/problems/course-schedule/) | Medium | Topological Sort |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/graph/207) |
| 210 | [Course Schedule II](https://leetcode.com/problems/course-schedule-ii/) | Medium | Topological Sort |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/graph/210) |
| 261 | [Graph Valid Tree](https://leetcode.com/problems/graph-valid-tree/) | Medium | Union Find, DFS |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/graph/261) |
| 269 | [Alien Dictionary](https://leetcode.com/problems/alien-dictionary/) | Hard | Topological Sort |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/graph/269) |
| 277 | [Find the Celebrity](https://leetcode.com/problems/find-the-celebrity/) | Medium | Graph |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/graph/277) |
| 310 | [Minimum Height Trees](https://leetcode.com/problems/minimum-height-trees/) | Medium | BFS |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/graph/310) |

## Common Patterns & Techniques
1. Graph Traversal
   - DFS (Depth-First Search)
   - BFS (Breadth-First Search)

2. Topological Sort
   - Cycle detection
   - Dependency resolution

3. Union Find
   - Connected components
   - Cycle detection

4. Special Graph Problems
   - Bipartite graphs
   - Minimum spanning trees
   - Shortest paths

## My suggestions for Graph Problems
- Draw out the graph for visualization
- Consider both directed and undirected cases
- Watch for cycles in the graph
- Think about connectivity requirements
- Consider using adjacency lists vs matrices

## Directory Structure
Each problem directory contains:
problemNumber/
├── q.txt          # Problem description
├── sol.py         # Python solution
├── sol.java       # Java solution
├── my.py          # My Python attempt
└── my.java        # My Java attempt