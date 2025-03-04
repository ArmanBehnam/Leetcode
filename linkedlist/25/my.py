# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseKGroup(self, head: ListNode, k: int) -> ListNode:
        # Edge case: empty list or k=1 (no reversal needed)
        if not head or k == 1:
            return head
        
        # Create dummy node
        dummy = ListNode(0)
        dummy.next = head
        
        # Initialize pointers
        prev_group_end = dummy
        current = head
        
        # Function to reverse k nodes starting from start
        def reverse_k_nodes(start, k):
            # Initialize pointers for reversal
            prev, curr = None, start
            
            # Reverse k nodes
            for _ in range(k):
                next_temp = curr.next
                curr.next = prev
                prev = curr
                curr = next_temp
            
            # Return new start (prev) and the next node after group (curr)
            return prev, curr, start
        
        # Count remaining nodes
        count = 0
        node = head
        while node:
            count += 1
            node = node.next
        
        # Process full k-groups only
        while count >= k:
            # Get the current group to reverse
            group_start = current
            
            # Reverse current k-group
            new_group_start, next_group_start, new_group_end = reverse_k_nodes(group_start, k)
            
            # Connect previous group end to new group start
            prev_group_end.next = new_group_start
            
            # Connect new group end to next group start
            new_group_end.next = next_group_start
            
            # Update pointers for next iteration
            prev_group_end = new_group_end
            current = next_group_start
            
            # Update remaining count
            count -= k
        
        return dummy.next
