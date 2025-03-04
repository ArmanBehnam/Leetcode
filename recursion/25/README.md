# Reverse Nodes in k-Group (LeetCode #25)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-25.%20Reverse%20Nodes%20in%20k--Group-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/reverse-nodes-in-k-group/)

## Problem Description

Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.
`k` is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of `k` then left-out nodes, in the end, should remain as it is.
You may not alter the values in the list's nodes, only nodes themselves may be changed.

### Examples
```bash
Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]
```

## Solutions
- [Python Solution](./solution.py) - Optimized two-pointer approach
- [Java Solution](./Solution.java) - Optimized two-pointer approach
- [C Solution](./solution.c) - Optimized two-pointer approach

### Approach

All three implementations use a similar optimized iterative approach:

1. Initialization:

   - Create a dummy node to simplify edge cases
   - Count total nodes once at the beginning
   - Track the end of the previous group

2. Group Processing Loop:

   - Process only complete k-groups (count >= k)
   - For each group:

      - Save the start of the current group (will be the end after reversal)
      - Find the start of the next group
      - Reverse the k nodes in the current group
      - Connect the previous group end to the new group start
      - Connect the new group end to the next group start
      - Update pointers for the next iteration
      - Decrement the count by k


3. Edge Case Handling:

   - Early return for empty lists or k=1 (no reversal needed)
   - Nodes at the end that don't form a complete group remain unchanged


## Visual Example (k=2)

Initial list:
```bash
dummy -> 1 -> 2 -> 3 -> 4 -> 5
         |    |    |    |    |
       group1  group2  group3
```

After processing:
```bash
dummy -> 2 -> 1 -> 4 -> 3 -> 5
         |    |    |    |    |
       group1  group2  group3
```

## Performance Optimizations

1. Upfront Node Counting:

   - Count all nodes once at the beginning
   - Track remaining nodes to process


2. Efficient Pointer Management:

   - Minimize temporary variables
   - Combine pointer updates where possible
   - Use direct pointer reassignment


3. Early Termination:

   - Return immediately for k=1
   - Skip unnecessary validation checks


4. Loop Optimization:

   - Batch pointer movements
   - Reduce redundant checks



## Time & Space Complexity

- Time Complexity: O(n)

   - Each node is processed at most twice
   - Counting: O(n)
   - Reversal: O(n)


- Space Complexity: O(1)

   - Only constant extra space is used regardless of input size



## Constraints

- The number of nodes in the list is n
- 1 <= k <= n <= 5000
- 0 <= Node.val <= 1000