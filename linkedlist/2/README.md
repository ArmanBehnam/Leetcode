# Add Two Numbers (LeetCode #2)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-2.%20Add%20Two%20Numbers-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/add-two-numbers/)

## Problem Description

You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse order**, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

### Examples
```bash
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

Input: l1 = [0], l2 = [0]
Output: [0]

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
Explanation: 9999999 + 9999 = 10009998
```

## Solutions
- [Python Solution](./solution.py) - Iterative approach
- [Java Solution](./Solution.java) - Iterative approach
- [C Solution](./solution.c) - Iterative approach

### Approach

1. Create a dummy head node to simplify linked list construction
2. Iterate through both lists simultaneously, adding corresponding digits
3. Track the carry value for additions that exceed 9
4. Create new nodes with the digit value (sum % 10)
5. Continue until both lists are exhausted and there's no remaining carry
6. Return the resulting linked list

This approach simulates the manual addition process we learned in elementary school, working from right to left.



## Performance
For all implementations:

- Time Complexity: O(max(m, n))

   - Where m and n are the lengths of the two input linked lists
   - We need to traverse both lists exactly once


- Space Complexity: O(max(m, n))

   - The output list contains at most max(m, n) + 1 nodes (the +1 accounts for a possible carry in the most significant digit)

## Test Cases
Each solution includes test cases for:

- Addition with carry (Example 1)
- Simple addition without carry (Example 2)
- Addition with multiple carries and a final carry (Example 3)

## Constraints

- The number of nodes in each linked list is in the range `[1, 100]`
- `0 <= Node.val <= 9`
- It is guaranteed that the list represents a number that does not have leading zeros.
