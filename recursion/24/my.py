# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution(object):
    def swapPairs(self, head):
        # Create a dummy node to handle edge cases
        dummy = ListNode(0)
        dummy.next = head
        prev = dummy
        
        # Iterate through the list
        while head and head.next:
            # Nodes to be swapped
            first = head
            second = head.next
            
            # Swapping
            prev.next = second
            first.next = second.next
            second.next = first
            
            # Update pointers for next iteration
            prev = first
            head = first.next
        
        # Return the new head
        return dummy.next
        