# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        dummy = ListNode(0)
        current = dummy
        carry = 0
        
        # Process both lists while they have nodes
        while l1 and l2:
            total = l1.val + l2.val + carry
            carry = total // 10
            current.next = ListNode(total % 10)
            current = current.next
            l1 = l1.next
            l2 = l2.next
        
        # Process remaining nodes in l1 if any
        remaining = l1 or l2
        while remaining:
            total = remaining.val + carry
            carry = total // 10
            current.next = ListNode(total % 10)
            current = current.next
            remaining = remaining.next
        
        # Add final carry if necessary
        if carry:
            current.next = ListNode(carry)
        
        return dummy.next