# Merge k Sorted Lists (LeetCode #23)
[![LeetCode Problem](https://img.shields.io/badge/LeetCode-23.%20Merge%20k%20Sorted%20Lists-FFA116?style=for-the-badge&logo=leetcode)](https://leetcode.com/problems/merge-k-sorted-lists/)

## Problem Description

You are given an array of `k` linked-lists `lists`, each linked-list is sorted in ascending order. Merge all the linked-lists into one sorted linked-list and return it.

Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.

### Examples
```bash
Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6
Input: lists = []
Output: []
Input: lists = [[]]
Output: []
```

## Solutions
- [Python Solution](./solution.py) - Min-heap approach
- [Java Solution](./Solution.java) - Priority Queue approach
- [C Solution](./solution.c) - Custom min-heap implementation

### Approach

1. Min Heap / Priority Queue Approach (Python & Java)
Both Python and Java solutions use a min-heap data structure (PriorityQueue in Java):

- Create a min-heap/priority queue to track the smallest node across all lists
- Initially add the head node from each non-empty list to the heap
- While the heap is not empty:

   - Extract the minimum node and add to result list
   - If the extracted node has a next node, add it to the heap


- Return the merged list

This approach efficiently finds the next smallest node in logarithmic time.

2. Custom Min Heap Implementation (C)

The C solution implements a custom min-heap:

   - Create a min-heap data structure with operations for insertion and extraction
   - Add the first node from each list to the heap
   - Extract the minimum element, add to result, and insert the next node from that list
   - Repeat until heap is empty



## Performance
For all implementations:

- Time Complexity: O(N log k)

   - N is total number of nodes across all lists
   - k is the number of lists
   - Each heap operation takes O(log k) time


- Space Complexity: O(k)

   - The heap stores at most k nodes at any time



## Test Cases
Each solution includes test cases for:

- Example with multiple non-empty lists
- Empty input list (`[]`)
- Input with a single empty list (`[[]]`)

## Constraints

- `k == lists.length`
- `0 <= k <= 10^4`
- `0 <= lists[i].length <= 500`
- `-10^4 <= lists[i][j] <= 10^4`
- `lists[i]` is sorted in ascending order
- The sum of `lists[i].length` will not exceed `10^4`
