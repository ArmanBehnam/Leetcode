# Swap Nodes in Pairs (LeetCode #24)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-24.%20Swap%20Nodes%20in%20Pairs-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/swap-nodes-in-pairs/)

## Problem Description

Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

### Examples
```bash
Input: head = [1,2,3,4]
Output: [2,1,4,3]

Input: head = []
Output: []

Input: head = [1]
Output: [1]

Input: head = [1,2,3]
Output: [2,1,3]
```

## Solutions
- [Python Solution](./solution.py)
- [Java Solution](./Solution.java)
- [C Solution](./solution.c)

### Approach

All three implementations use the same iterative approach:

1. Create a dummy node that points to the head to handle edge cases
2. Use three pointers to track:

   - `prev`: the node before the pair to be swapped
   - `first`: the first node in the pair
   - `second`: the second node in the pair


3. Swap process:

```bash
prev -> first -> second -> next_nodes
          ↓
prev -> second -> first -> next_nodes
```

4. For each swap:

   - Set `prev.next = second`
   - Set `first.next = second.next`
   - Set `second.next = first`
   - Update `prev = first` for the next iteration
   - Update `head = first.next` for the next iteration


5. Return `dummy.next` as the new head of the list


## Time & Space Complexity

- Time Complexity: O(n), where n is the number of nodes in the linked list

   - We traverse the list once, processing each node exactly once


- Space Complexity: O(1)

   - We use a constant amount of extra space regardless of input size
   - Only a few pointer variables are needed for the algorithm



## Edge Cases Handled

- Empty list ([]) returns null/None
- Single node list ([1]) returns unchanged
- Odd-length lists (e.g., [1,2,3]) handle the trailing node correctly ([2,1,3])

## Implementation Notes
- Python

   - Uses a `ListNode` class with `val` and `next` attributes
   - Includes helper functions for testing:

      - `createLinkedList` to convert an array to a linked list
      - `linkedListToArray` to convert back for verification



- Java

   - Uses the standard `ListNode` class
   - Implements the same algorithm with Java syntax
   - Includes a test class with helper methods

- C

   - Uses a struct ListNode with val and next members
   - Implements memory management for the test cases
   - Uses a dummy node to simplify the swap logic

## Constraints

- The number of nodes in the list is in the range `[0, 100]`
- `0 <= Node.val <= 100`