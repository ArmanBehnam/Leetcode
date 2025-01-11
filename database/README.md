# Database Problems
This directory contains solutions to LeetCode SQL problems that focus on database queries and manipulations. These problems typically involve complex SQL queries, joins, aggregations, and window functions.

## Problem List
| # | Title | Difficulty | Key Concepts | My Solution |
|---|-------|------------|--------------|-------------|
| 175 | [Combine Two Tables](https://leetcode.com/problems/combine-two-tables/) | Easy | LEFT JOIN |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/database/175) |
| 176 | [Second Highest Salary](https://leetcode.com/problems/second-highest-salary/) | Medium | Subquery, IFNULL |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/database/176) |
| 177 | [Nth Highest Salary](https://leetcode.com/problems/nth-highest-salary/) | Medium | Window Functions |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/database/177) |
| 178 | [Rank Scores](https://leetcode.com/problems/rank-scores/) | Medium | DENSE_RANK |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/database/178) |
| 180 | [Consecutive Numbers](https://leetcode.com/problems/consecutive-numbers/) | Medium | Self Join |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/database/180) |
| 181 | [Employees Earning More Than Their Managers](https://leetcode.com/problems/employees-earning-more-than-their-managers/) | Easy | Self Join |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/database/181) |
| 182 | [Duplicate Emails](https://leetcode.com/problems/duplicate-emails/) | Easy | GROUP BY, HAVING |[My Code](https://github.com/ArmanBehnam/Leetcode/tree/main/database/182) |

## Common Patterns & Techniques
1. Joins
   - LEFT/RIGHT/INNER/OUTER JOINs
   - Self joins for hierarchical data

2. Window Functions
   - RANK, DENSE_RANK, ROW_NUMBER
   - Sliding window calculations

3. Aggregation Functions
   - GROUP BY with HAVING
   - COUNT, SUM, AVG, MAX, MIN

4. Subqueries
   - Correlated subqueries
   - Derived tables

## My suggestions for Database Problems
- Consider NULL values carefully
- Think about data integrity and constraints
- Optimize query performance
- Use appropriate joins based on requirements
- Consider using CTEs for complex queries

## Directory Structure
Each problem directory contains:
problemNumber/
├── q.txt          # Problem description
├── solution.sql   # SQL solution
└── my.sql         # My SQL attempt